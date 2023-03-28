#include "../../includes/channels.h"
#include "../../includes/packet.h"
#include "../../includes/protocol.h"

module FloodingP {
	provides interface Flooding;

	uses interface SimpleSend as Sender;
	uses interface Hashmap<uint16_t> as prior_packets;
}

implementation {
	pack send_pkt;
	uint16_t sequence_number = 1; // should start off at one, to avoid issues with hashmap

	// Prototypes (coppied form Node.nc because this seems useful)
   	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);

	// takes in a packet and and the destination, rewrites packet as necessary, and sends
	command void Flooding.send(pack in_pack, uint16_t destination) {
		// recreates packet as necessary
		if (in_pack.TTL == 0) // this is by default 32, but can be manually defined if necessary (neighbor discovery)
			in_pack.TTL = 15;
		
		makePack(&send_pkt, TOS_NODE_ID, destination, in_pack.TTL, in_pack.protocol, sequence_number, (uint8_t*)&in_pack.payload, PACKET_MAX_PAYLOAD_SIZE);

		// debugging print statement
		dbg(FLOODING_CHANNEL, "FLOODING PING FROM %d TO %d\n", TOS_NODE_ID, destination);

		// sends to all nearby addresses
		call Sender.send(send_pkt, AM_BROADCAST_ADDR);

		call prior_packets.insert(send_pkt.src, send_pkt.seq);

		// iterates sequence number
		sequence_number++;
	}
	
	command void Flooding.send_down_line(pack in_pack) {
		// Have I seen packet before?
		if (call prior_packets.get(in_pack.src) == in_pack.seq) {
			dbg(FLOODING_CHANNEL, "NODE %d RECIEVED PACKET IT HAD SEEN BEFORE\n", TOS_NODE_ID);
		} else if (in_pack.TTL == 0) { // is packet dead?
			dbg(FLOODING_CHANNEL, "NODE %d RECIEVED DEAD PACKET\n", TOS_NODE_ID);
		}else {
		// Resend packet
			in_pack.TTL -= 1;
			call prior_packets.insert(in_pack.src, in_pack.seq);

			call Sender.send(in_pack, AM_BROADCAST_ADDR);
			dbg(FLOODING_CHANNEL, "NODE %d RESENDING PACKET\n", TOS_NODE_ID);
			//dbg(FLOODING_CHANNEL, "Packet: %d, %d, %d, %d, %d, %s\n", in_pack.dest, in_pack.src, in_pack.seq, in_pack.TTL, in_pack.protocol, (uint8_t*)in_pack.payload);// ensuring that data remains sound
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










