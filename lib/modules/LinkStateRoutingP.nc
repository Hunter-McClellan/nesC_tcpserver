// waits 10 seconds for Neigbor discovery to finish, then requests all neighbors from it.
// Creates a LSA and floods it to all other nodes in the network with dest = src.
// gets in LSA packets from other nodes from IP module, and waits 10 more seconds to start routing.
// determines optimal path from this node to each other nodes, and sends to IP so that routing is optimal.
// Every 10 seconds, gets all neighbors from ND module, compares to previous nodes: if different, recalculate optimal routes, and flood new LSA.
// When an LSA is recieved from another node, log change and recalculate optimal routes. Do not do this until a timer fires after ~20 seconds to prevent unnecessary
// route calculations as all nodes are turned on. After 20 seconds, manually call route calculation and enable route calculation as LSAs are recieved.
// actually, fock it, routing table will be stored here.
// NEW PLAN: no sending optimal routes to IP, that would probably lead to circular dependincies.
// Instead routing table is kept here, where IP can request it

/// NOTABLE NEW ASSUMPTION: I AM ASSUMING THAT THIS WILL ONLY BE USED ON NETWORKS SMALLER THAN 32 NODES. THIS CAN BE CHANGED BY CHANGING ALL NODES FROM uint8_t to uint32_t, which will probably break things

#include "../../includes/channels.h"
#include "../../includes/packet.h"
#include "../../includes/protocol.h"

module LinkStateRoutingP {
	provides interface LinkStateRouting;

	uses interface Timer<TMilli> as Timer; // periodic checks to ND for new updates
	uses interface NeighborDiscovery as ND; // uses for neighbor discovery
	uses interface Flooding as Flooding; // used for LSA
	
	uses interface Hashmap<uint16_t> as RoutingTable; // byte 1: target Node, byte 2: next step, byte 3: next step cost, byte 4: backup next step.
	// No backup cost as secondary node should trigger rerouting as if 1st node is offline.
}

implementation {
	pack send_pkt;

	uint8_t begin = 1; // when timer = 1, brodcast neighbors. when 0, check for differences and recalculate if necessary
	uint8_t topoChanged = 0; // keeps track of if there has been a change in the network topography

	typedef struct {
		uint8_t dest;
		uint8_t cost;
		// uint8_t cost; for now I will consider all node connections to have a cost of 1.
	}connection;

	connection topography[32][32]; // change to be a larger number if using a topography with more than 256 connections
	// with this, new connections will be stored. 
	// node connections from ND will be flooded with the pattern NODE, NUM OF NEIGHBORS, NEIGHBOR1, NEIGHBOR2, etc.
	// packets should be at least 2 bytes of data.
	// row 1 represents nodes / num node connections, columns represent connections from that row
	uint8_t topoSize = 0;

	void LSArecieved(pack in_pack);
	void dijkstra();
   	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);

	command void LinkStateRouting.begin() {
		call ND.boot();
		call Timer.startPeriodic(5000); // lets use 1 second intervals this time.

		dbg(ROUTING_CHANNEL, "begin LS routing");
	}

	event void Timer.fired() {
		uint32_t * neighbors;
		uint8_t num;
		uint8_t temp = 0;
		uint8_t data[PACKET_MAX_PAYLOAD_SIZE];
		uint8_t neighborsChanged = 0;
		uint8_t * thing;


		neighbors = call ND.get_Neighbors(&num, &neighborsChanged);
		//dbg(ROUTING_CHANNEL, "%u\n", *neighbors);

		if (begin == 1 || neighborsChanged) { // check
			while (temp < num) {
				//thing[temp] = (uint8_t)neighbors[temp];
				temp ++;
			}
			//dbg(ROUTING_CHANNEL, "%d, \n", (uint8_t)neighbors[0]);
			if (num > 18) {
				dbg(ROUTING_CHANNEL, "Too many neighbors!");
				num = 18; // justifying this by saying that the neigbors that respond first are probably closer and therefore more reliable.
			}
			temp = num;
			topography[TOS_NODE_ID][0].dest = num;
			while (temp > 0) {
				temp --;
				topography[TOS_NODE_ID][temp + 1].dest = (uint8_t)neighbors[temp];
				//dbg(ROUTING_CHANNEL, "%u added to ls table\n", (uint8_t)neighbors[temp]);
				topography[TOS_NODE_ID][temp + 1].cost = 1;
			}
			data[0] = TOS_NODE_ID;
			data[1] = num;
			while (num > 0) {
				num --;
				data[num + 2] = (uint8_t)neighbors[num];
			}
			makePack(&send_pkt, TOS_NODE_ID, AM_BROADCAST_ADDR, 0, PROTOCOL_LINKSTATE, 0, data, PACKET_MAX_PAYLOAD_SIZE);
			call Flooding.send(send_pkt, AM_BROADCAST_ADDR);
			if(topoSize < TOS_NODE_ID) {
				topoSize = TOS_NODE_ID;
			}
			begin = 0;
			neighborsChanged = 0;
			topoChanged = 1;
		}
		if (begin == 0 && topoChanged == 1) {
			dijkstra();
			//dbg(ROUTING_CHANNEL, "dijkstra\n");
		}

	}

	command void LinkStateRouting.packet_recived(pack in_pack) { // if a packet meant for us has been recived
		if (in_pack.protocol == 2) {
			// we do something to note this
			LSArecieved(in_pack);
			call Flooding.send_down_line(in_pack);
			// call new node information
		} else {
			call ND.disc_message_recieved(in_pack); // ignore from now on
		}
	}

	void LSArecieved(pack in_pack){
		uint8_t connections[18];
		uint8_t node = in_pack.payload[0];
		uint8_t size = in_pack.payload[1];
		topography[node][0].dest = size;
		if (topoSize < node) {
			topoSize = node;
		}
		while (size > 0) {
			size --;
			topography[node][size + 1].dest = in_pack.payload[size + 2];
			topography[node][size + 1].cost = 1;
		}
		topoChanged = 1;
	}

	void dijkstra() {
		
		uint8_t i = 0;
		uint8_t j = 0;
		uint8_t unsorted = topoSize;
		uint8_t d[33]; // cost to get to this node
		uint8_t pi[33]; // precursor node
		uint8_t u;
		uint8_t Q[33]; // holds final d and pi
		uint8_t converter[2]; // used to convert 2 uint8_t to one uint16_t
		uint8_t temp;
		// var names are based on intro to algorithms, third edition
		//dbg(ROUTING_CHANNEL, "dijkstra FIRED");

		while (i < topoSize) { // initialize all of the things needed for dijkstra
			i++;
			d[i] = 254;
			pi[i] = 0;
			call RoutingTable.remove(i);
		}

		d[TOS_NODE_ID] = 0; // set it so that the cost of going to the local node is 0, so that the algo starts here
		//call LinkStateRouting.dumpLS();
		while (unsorted > 0) {
			i = 0;
			u = 0; // u  is node, j is cost, pi is precursor node
			j = 255;
			while (i < topoSize) { // extract min
				i++;
				if(d[i] < j) {
					j = d[i];
					u = i;
				}
			}

			//dbg(ROUTING_CHANNEL, "u: %d\n", u);
			
			//temp = 0;
			//while (temp < topoSize) {
			//	temp ++;
				
			//}

			// S = S U {u}
			//converter[0] = j;
			//converter[1] = pi[u];
			Q[u] = j;//*(uint16_t*)converter;

			j = topography[u][0].dest; // get the number of edges
			i = 0;
			while (i < j) {
				i ++;// d = 255 indicates that the node is already accounted for
				if (d[topography[u][i].dest] != 255 && d[topography[u][i].dest] > d[u] + topography[u][i].cost) {
					d[topography[u][i].dest] = d[u] + topography[u][i].cost;
					pi[topography[u][i].dest] = u;
				}
			}
			//dbg(ROUTING_CHANNEL, "PI[%d]: is %d, q is %d, d %d\n", u, pi[u], Q[u], d[u]);
			// marking the node as already accounted for
			d[u] = 255;
			unsorted --;
		}

		


		// At this point we should have precursors for all nodes
		i = 0;
		u = 0; // u represents current node, j represents pi[u]
		j = 0;
		while (i < topoSize) {
			i++;
			if (i != TOS_NODE_ID) { //don't do this of this node, that would probably break things
				u = i;
				j = pi[u];
				while (j != TOS_NODE_ID && j != 0) {
					u = j;
					j = pi[u];
				}
				converter[0] = u;
				converter[1] = Q[i];
				call RoutingTable.insert(i, *(uint16_t*)converter);
			}
		}
		// should be finished at this point
		topoChanged = 0;

	}
	
	command uint8_t LinkStateRouting.getNext(uint8_t dest) {
		// get the next hop from the table
		uint8_t *converter;
		uint16_t temp = call RoutingTable.get(dest);
		converter = (uint8_t*)&temp;
		return converter[0];
	}

	command uint8_t LinkStateRouting.getCost(uint8_t dest) {
		// get the cost to dest from the table
		uint8_t *converter;
		uint16_t temp = call RoutingTable.get(dest);
		converter = (uint8_t*)&temp;
		return converter[1];
	}

	command void LinkStateRouting.dumpLS() {
		uint8_t i = 0;
		uint8_t j = 0;
		uint8_t k = 0;
		dbg(ROUTING_CHANNEL, "NODE %u DUMPING LS TABLE\n", TOS_NODE_ID);
		while (i < 32) {
			i ++;
			j = 0;
			k = topography[i][0].dest;
			if (k != 0) {
				dbg(ROUTING_CHANNEL, "Printing Node %u connenctions: \n", i);
				while (j < k) {
					dbg(ROUTING_CHANNEL, "%d, \n", topography[i][j + 1].dest);
					j++;
				}
				//dbg(ROUTING_CHANNEL, "\n");
			}
		}
		dbg(ROUTING_CHANNEL, "\n");
	}
	

	command void LinkStateRouting.dumpRT() {
		uint16_t temp;
		uint8_t *converter;
		uint8_t iterator = call RoutingTable.size();
		uint32_t *keys = call RoutingTable.getKeys();
		dbg(NEIGHBOR_CHANNEL, "NODE %d DUMPING Route Table\n", TOS_NODE_ID);
		
		//while (iterator > 0) {
		//	iterator --;
		//	dbg(NEIGHBOR_CHANNEL, "Neighbor: %d\n", keys[iterator]);
		//}
		
		//call RoutingTable.get(keys[iterator]);
		while (iterator > 0) {
			iterator --;
			//return;
			temp = call RoutingTable.get(keys[iterator]);
			//return;
			converter = (uint8_t *)&temp;
			dbg(NEIGHBOR_CHANNEL, "Ideal node to %d: %d, cost %d\n", keys[iterator], converter[0], converter[1]);
		}
	}

	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length){
		Package->src = src;
		Package->dest = dest;
		Package->TTL = TTL;
		Package->seq = seq;
		Package->protocol = protocol;
		memcpy(Package->payload, payload, length);
	}

}