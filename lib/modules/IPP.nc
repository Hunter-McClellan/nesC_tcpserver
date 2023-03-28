// handles all data forwarding, gets routing information from LS module, delivers packets as needed to different modules

#include "../../includes/channels.h"
#include "../../includes/packet.h"
#include "../../includes/protocol.h"
#include "../../includes/command.h"

module IPP{
	provides interface IP;

	uses interface Timer<TMilli> as Timer;
	uses interface Hashmap<pack> as Unconfirmed;
	uses interface SimpleSend as Sender;

	uses interface LinkStateRouting;
}

implementation {
	pack send_pkt;
	uint32_t sequence_number = 1;

   	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);



	command void IP.init() {
		//call Timer.startPeriodic(6000);
		call LinkStateRouting.begin();
	}

	command void IP.packet_recived(pack in_pack) {
		uint8_t next_hop;
		pack temp;

		if (in_pack.dest == AM_BROADCAST_ADDR) {
			// let the link layer handle it, flooding should already resend it.
			call LinkStateRouting.packet_recived(in_pack);
		} else if (in_pack.dest == TOS_NODE_ID) {
			// do something
			dbg(GENERAL_CHANNEL, "Packet Received by %d\n", TOS_NODE_ID);
			if (in_pack.protocol == 0) {
				dbg(GENERAL_CHANNEL, "Package Payload: %s\n", in_pack.payload);
				// send return ping
				in_pack.protocol = 1;
				in_pack.dest = in_pack.src;
				in_pack.src = TOS_NODE_ID;

				next_hop = call LinkStateRouting.getNext(in_pack.dest);

				call Sender.send(in_pack, next_hop);
			} else if (in_pack.protocol == 1) {
				temp = call Unconfirmed.get(in_pack.seq);
				if (temp.seq == in_pack.seq) {
					call Unconfirmed.remove(in_pack.seq);
					dbg(GENERAL_CHANNEL, "Return ping for seq %d recieved\n", in_pack.seq);
				} else {
					dbg(GENERAL_CHANNEL, "Packet Received by %d\n", TOS_NODE_ID);
				}
			}
		} else {
			// call send from here.
			next_hop = call LinkStateRouting.getNext(in_pack.dest);
			dbg(GENERAL_CHANNEL, "Relaying packet dest for %d to %d\n", in_pack.dest, next_hop);
			call Sender.send(in_pack, next_hop);
		}
	}

	event void Timer.fired() {
		
		// resend unconfirmed packets
		uint8_t iterator = call Unconfirmed.size();
		uint32_t *keys = call Unconfirmed.getKeys();
		uint8_t hop;
		pack in_pack;


		dbg(ROUTING_CHANNEL, "timer fired with %d unconfirmed packets\n", iterator);

		while (iterator > 0) {
			iterator --;
			in_pack = call Unconfirmed.get(keys[iterator]);
			hop = call LinkStateRouting.getNext(in_pack.dest );
			call Sender.send(in_pack, hop);
			//dbg(ROUTING_CHANNEL, "Resending Packet with seq num %d to %d\n", in_pack.seq, hop);
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

	command void IP.send(pack in_pack, uint8_t dest) {
		uint8_t hop = call LinkStateRouting.getNext(dest);
		in_pack.seq = in_pack.seq;
		call Sender.send(in_pack, hop);
		//call Unconfirmed.insert(in_pack.seq, in_pack);
		hop = call Unconfirmed.size();
		dbg(ROUTING_CHANNEL, "sending packet with %d unconfirmed packets\n", hop);
		//sequence_number ++;
	}

	command uint8_t IP.getCost(uint8_t dest) { // gets the length from this node to the destination
		return call LinkStateRouting.getCost(dest);
	}
}