#include "../../includes/channels.h"
#include "../../includes/packet.h"
#include "../../includes/protocol.h"

module NeighborDiscoveryP {
	provides interface NeighborDiscovery;

	uses interface Timer<TMilli> as Timer;
	uses interface SimpleSend as Sender;
	uses interface Hashmap<uint8_t> as Neighbors; // will assign 1 every 10 seconds, 2 if a return ping is obtained. will then delete entries with 1 after 10 secs
}

implementation {
	pack discPack;
	uint8_t changed = 0;

	command void NeighborDiscovery.boot() {
		call Timer.startPeriodic(5000); // call every 5 seconds
		
		// manually set up pack that will be slightly altered
		discPack.dest = AM_BROADCAST_ADDR; // dest as broadcast addr will indicate discovery packet
		discPack.src = TOS_NODE_ID;
		discPack.TTL = 1;
		discPack.protocol = 0; // will be changed in following function;
		//memcpy(discPack.payload, (uint8_t*)0,PACKET_MAX_PAYLOAD_SIZE); // should not have payload
		dbg(NEIGHBOR_CHANNEL, "begin ND");
	}

	command void NeighborDiscovery.disc_message_recieved(pack in_pack) { // discPack will be sent back to original sender, with generic format
		if (call Neighbors.get(in_pack.src) == 0) {
			changed = 1;
		}
		call Neighbors.insert(in_pack.src, 2); // insert new packet into hashmap
		if (in_pack.protocol == 1) { // this is a return ping, don't send a new one
			return;
			// no need to send anything else, as this is just logging return packets
		}

		discPack.protocol = 1; // setup pack to send;

		call Sender.send(discPack, in_pack.src); // send a return packet
	}

	event void Timer.fired() {
		uint8_t iterator = call Neighbors.size();
		uint32_t *keys = call Neighbors.getKeys();
		while (iterator > 0) {
			iterator --;
			if (call Neighbors.get(keys[iterator]) == 1) {
				call Neighbors.remove(keys[iterator]);
				changed = 1;
			} else {
				call Neighbors.insert(keys[iterator], 1);
			}
		}

		// brodcast new discovery packets
		discPack.protocol = 0;
		call Sender.send(discPack, AM_BROADCAST_ADDR);
	}

	command void NeighborDiscovery.print_neighbors() { // do I need to explain this one?
		uint8_t iterator = call Neighbors.size();
		uint32_t *keys = call Neighbors.getKeys();
		dbg(NEIGHBOR_CHANNEL, "NODE %d DUMPING NEIGHBORS\n", TOS_NODE_ID);
		while (iterator > 0) {
			iterator --;
			dbg(NEIGHBOR_CHANNEL, "Neighbor: %d\n", keys[iterator]);
		}
	}

	command uint32_t* NeighborDiscovery.get_Neighbors(uint8_t *num, uint8_t *has_changed) {
		*has_changed = changed;
		changed = 0;
		*num = call Neighbors.size();
		return call Neighbors.getKeys();
	}
}