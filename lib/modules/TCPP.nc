// So, currently, just needs to handle creating a connection with a server and disengaging the connection with a server?
// SYN:
// Send SYN(x) from client to server, server responds with SYN(y)ACK(x+1), client responds with seq = x + 1, ack = y+1
// FIN:
// Send fin from client to server, server sends ack packet and fin packet, client responds to fin packet with ack packet

#include "../../includes/protocol.h"
#include "../../includes/packet.h" // max payload size
#include "../../includes/socket.h"
#include "../../includes/tcp_queue_info.h"



module TCPP{
	provides interface TCP;

	uses interface Hashmap<tcpQueueInfo> as sendQueue; // the sendQueue keeps track of which packets havent been acked and when to resend them
	uses interface Timer<TMilli> as Timer;
	uses interface Timer<TMilli> as events;
	uses interface IP;
}

implementation {
	enum tcpType {
		SYN = 0, // ignore ack
		SYNACK = 1, // ack is relevant
		ACK = 2, // Acknowledgment of DATA
		DATA = 3, // self explanatory
		FIN = 4,
	};

	uint8_t MAX_TCP_PAYLOAD_SIZE = PACKET_MAX_PAYLOAD_SIZE - 8; // should be 12

	typedef struct TCPpacket { // should be 20 bytes long, 12 payload
		uint8_t src;
		uint8_t dest;
		uint8_t srcp; // source port
		uint8_t destp;  // dest port
		uint8_t seq; // sequence num
		uint8_t ack;      // ack num
		uint8_t flag;// fin, syn etc
		uint8_t advwin;// not used
		uint8_t payload[12];
	}TCPpacket;
	TCPpacket tcp_pack;

	//socket_store_t root_socket; // port 255, root port as per socket.h, will also use for client
	
	// socket ID 0 will be reserved for client connections
	socket_store_t sockets[MAX_NUM_OF_SOCKETS];
	uint8_t socket_seq[MAX_NUM_OF_SOCKETS];
	/// next ack must be > than ack to free data in the socket cache
	uint8_t socket_highAck[MAX_NUM_OF_SOCKETS]; // the highest seq we recieve
	uint8_t socket_nextAck[MAX_NUM_OF_SOCKETS]; // the incoming seq we expect to hear 

	pack to_send;

	uint8_t cli_data_to_send = 0;
	uint8_t cli_data_sent = 0;

	uint8_t node_state = 0; // 1 for server, 2 for client, 3 for both
	uint8_t clients = 0;
	uint8_t serv_port;
	uint16_t data_to_send[100]; // change later, set just so that it can test the socket cache and flow control

	/// END VARIABLE DECLARATION
	




	/// BEGIN FUNCTION DECLARATION
	/// commented functions are public functions for this component or other stuff (timer.fired)

	/// these should be created first
	// handles the packets (sends to functions, shouldn't do much itself)
	// command void TCP.handle_packet(pack in_pack); //--

	// sends the packet and handles adding to sendQueue
	void send_packet(pack in_pack, socket_t socket_id, uint16_t delay); // needs the socket id to get the sequence number and expected RTT

	// sends the ack without adding it to the sendQueue (obviously)
	void send_ack(pack in_pack, socket_t socket_id); // needs the socket id for advwin and 

	// determines which packet was acked and removes it from the sendQueue (only called from handle_packet after ack has been sent to relevant function)
	void handle_ack(uint8_t seq, socket_t socket_id); // -- // removes the spefcified packet from the send queue

	// sends the next necesssary packet and starts a one shot timer for the closest next time
	//event void Timer.fired();



	/// handle server related stuff
	// initiates the server
	// command void TCP.init_server(uint8_t port) {

	// handle the server reciving a SYN
	void srv_initSynAck(pack in_pack); 

	// sets the server into data recieving mode
	void srv_toEstablished(socket_t socket_id); //basically just changes some local variables

	// handles data coming in during established state
	void srv_handleData(pack in_pack, socket_t socket_id); // --

	// initiate server Teardown
	void srv_initFinAck(socket_t socket_id); // -- // should add the ack for the fin and the fin to the send queue through the send packet 

	void srv_send_data (socket_t socket_id);


	/// handles client related stuff
	// starts the client connection process
	// command void TCP.init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer);

	// sets the socket to open and begins the process of sending data after sending ack
	void cli_synAck_recieved(pack in_pack);

	// sends data to fill up the reciever cache according to advwin
	void cli_sendData();

	// checks the ack for information on if we should send new data
	void cli_interpretAck(pack in_pack); // should be called in handle_ack after removing from sendQueue

	// initiates the teardown process after all data is sent
	void cli_beginShutdown();

	// begins timeout after server fin recieved (finack handled in interpretAck)
	void cli_timeWait();



	/// these should be created along with the others
	/// Misc Functions
	// creates an empty socket for use with a new TCP connection
	void init_socket(socket_t* new_socket, uint8_t local_port, uint8_t dest, uint8_t dest_port);

	// sets the socket equal to zero to inidcate that it is no longer in use
	void kill_socket(socket_t socket_id);


	// gets the socket that the connection coresponds to
	socket_t get_socket(TCPpacket tcpack);


	// self explanatory
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length);

	// again
	void makeTCpack(TCPpacket *packet, uint8_t src, uint8_t dest, uint8_t srcp, uint8_t destp, uint8_t seq, uint8_t ack, uint8_t flag, uint8_t advwin, uint8_t* payload, uint8_t length);

	void printSendqueue();

	void dumpRcvdbuff(socket_t socket_id);

	/// END FUNCTION DECLARATION







	/// BEGIN FUNCTION IMPLEMENTATION

	// implement later
	command void TCP.handle_packet(pack in_pack) {
		socket_t socket_id;
		socket_store_t *active_socket;
		TCPpacket *ttcpack;
		TCPpacket tcpack;


		//dbg(TRANSPORT_CHANNEL, "aaa %hhu\n", in_pack.dest);

		// make sure this packet is actually meant for us
		if (in_pack.dest != TOS_NODE_ID) {
			call IP.send(in_pack, in_pack.dest);
			return;
		} else if (in_pack.protocol != PROTOCOL_TCP) {
			call IP.packet_recived(in_pack);
			return;
		}

		
		ttcpack = (TCPpacket*)in_pack.payload;
		tcpack = *ttcpack;

		if (node_state == 1) { // SERVER STUFF
			if (ttcpack -> flag == SYN) { // create new socket for this connection
				//dbg(TRANSPORT_CHANNEL, "beginning connection to %hhu\n", in_pack.src);
				srv_initSynAck(in_pack);
				return;
			} 
			
			socket_id = get_socket(*ttcpack);
			active_socket = &sockets[socket_id];

			if (ttcpack -> flag == ACK && active_socket -> state != LAST_ACK) { // need to determine what this means for the server
				//dbg(TRANSPORT_CHANNEL, "BBBB %hhu\n", in_pack.seq);

				handle_ack(in_pack.seq, socket_id);
				
				if (active_socket -> state == SYN_RCVD) {// currently either finalizes connection or teardown
					srv_toEstablished(socket_id);
				}
			} else if (ttcpack -> flag == DATA) {
				//dbg(TRANSPORT_CHANNEL, "FFFFFFF %hhu\n", in_pack.seq);

				srv_handleData(in_pack, socket_id);
				send_ack(in_pack, socket_id);
			} else if (ttcpack -> flag == FIN) {
				dumpRcvdbuff(socket_id);
				send_ack(in_pack, socket_id);
				srv_initFinAck(socket_id);
			} else if (ttcpack -> flag == ACK && active_socket -> state == LAST_ACK) {
				active_socket -> flag = 0;
				active_socket -> state = CLOSED;
				handle_ack(in_pack.seq, socket_id);
				dbg(TRANSPORT_CHANNEL, "GOODBYE to NODE %hhu\n", in_pack.src);
			}

			// from this point on we should figure out which socket the packet coresponds to
		} else if (node_state == 2) { // CLIENT STUFF
			//dbg(TRANSPORT_CHANNEL, "AAAAA\n");

			if (ttcpack -> flag == SYNACK) {

				cli_synAck_recieved(in_pack);
			}

			if (ttcpack -> flag == ACK) {
				dbg(TRANSPORT_CHANNEL, "```ackRecieved for %hhu\n", ttcpack -> seq);
				cli_interpretAck(in_pack);
			}
			if (ttcpack -> flag == DATA) {
				//dbg(APPLICATION_CHANNEL, "packetRcvd: %s\n", sockets[0].rcvdBuff);
				srv_handleData(in_pack, 0);
				send_ack(in_pack, 0);
			}
			if (ttcpack -> flag == FIN) {
				cli_timeWait();
				send_ack(in_pack, 0);
			}
		}
	}




	// think this should work now
	void send_packet(pack in_pack, socket_t socket_id, uint16_t delay) {
		uint8_t i;
		tcpQueueInfo info;
		uint32_t key;

		info.packet = in_pack; // prob going to have memory issues with this but w/e
		info.time = sockets[socket_id].RTT;
		info.seq = in_pack.seq;
		info.socket_id = socket_id;

		dbg(TRANSPORT_CHANNEL, "%hu, %hu\n", sockets[socket_id].RTT, info.time);


		while (call sendQueue.contains(info.time)){ // increase time so no conflicts exist
			info.time ++;
		}
		call sendQueue.insert((uint32_t)info.time, info);

		dbg(TRANSPORT_CHANNEL, "adding to sendqueue with seq %hhu\n", info.seq);

		if (!(call Timer.isRunning())) {
			call Timer.startOneShot(info.time); // wait until the rtt of the timer is over
		} else if ((call Timer.getdt() + call Timer.gett0()) > (call Timer.getNow() + info.time)) {
			call Timer.startOneShot(info.time); // replace the next timer firing with this if it will happen sooner (expecting ack from cost 6 packet, sending 1 cost packet)
		}
		//printSendqueue();
	}

	// basically just takes in the packet, determines which ack needs to be sent, and sends ack
	void send_ack(pack in_pack, socket_t socket_id) { // deviation from book starts in full here, ack will be seq of both pack and ack of tcpack
		uint8_t num = in_pack.seq;
		pack send_pack;
		uint8_t advwin;
		socket_store_t *active_socket = &sockets[socket_id];

		// handle some basic stuff, recording which packets we are expecting		
		if (socket_highAck[socket_id] < num) { // we havent recieved any higher acks
			socket_highAck[socket_id] = num;	
		}

		if (num == socket_nextAck[socket_id]) { // we are expecting this packet, advance next ack
			socket_nextAck[socket_id] ++;
		} else if (num < socket_nextAck[socket_id]) {
			dbg(TRANSPORT_CHANNEL, "old packet from %hhu recieved\n", in_pack.src);
		}

		// some stuff is zero because I have been working on this for too long and just want to deliver something that works
		advwin = SOCKET_BUFFER_SIZE - active_socket -> lastRcvd + active_socket -> lastRead;

		dbg(TRANSPORT_CHANNEL, "ack for seq %hhu sent with advwin %hhu\n", socket_id, advwin);


		makeTCpack(&tcp_pack, TOS_NODE_ID, sockets[socket_id].dest.addr, sockets[socket_id].src, sockets[socket_id].dest.port, in_pack.seq, active_socket -> lastRcvd, ACK, advwin, 0, 0);
		makePack(&send_pack, TOS_NODE_ID, sockets[socket_id].dest.addr, MAX_TTL, PROTOCOL_TCP, in_pack.seq, (uint8_t*)(&tcp_pack), PACKET_MAX_PAYLOAD_SIZE);
		call IP.send(send_pack, send_pack.dest); // this should work, I think
	}

	void handle_ack(uint8_t seq, socket_t socket_id) {
		// removes the packet from the sendQueue and, if it is the only one left, stops the timer.
		uint32_t *keys;
		uint8_t size;
		uint8_t i;
		tcpQueueInfo info;

		keys = call sendQueue.getKeys();
		size = call sendQueue.size();

		//dbg(TRANSPORT_CHANNEL, "RRRRRRRRRRRRRRRRRRRRRRRRRRR\n");


		for (i = 0; i < size; i++) {
			info = call sendQueue.get(keys[i]);
			//dbg(TRANSPORT_CHANNEL, "info seq %hhu, seq %hhu\n", info.socket_id, socket_id);
			if (info.seq == seq && info.socket_id == socket_id) {
				call sendQueue.remove(keys[i]);
				break; // shouldnt be any duplicate packets but an ack should be sent automatically for any other packets
			}
		}

		size = call sendQueue.size();
		
		if (size == 0) {
			call Timer.stop();
		}
	}

	event void Timer.fired() { // needs to send whatever packet has the shortest delay and then reset the clock
		uint8_t i;
		uint8_t j = 0;
		uint16_t aaaa = 0;
		pack sende;
		uint32_t *keys;
		uint16_t min_time = 30000;
		uint8_t size;
		tcpQueueInfo info, tempInfo;


		//dbg(TRANSPORT_CHANNEL, "\n\n\n\n");

		//printSendqueue();


		//dbg(TRANSPORT_CHANNEL, "\n\n\n\n");

		size = call sendQueue.size();

		if (size == 0) {
			return; // this should be all thats needed to prevent sending random garbage. Hopefully.
		}

		// get the packet to send, but correctly this time.
		keys = call sendQueue.getKeys();
		info = call sendQueue.get(keys[0]);
		min_time = info.time;
		for (i = 1; i < size; i++) {
			tempInfo = call sendQueue.get(keys[i]);
			aaaa = tempInfo.time;
			if (min_time > aaaa) { // if this packet should be sent earlier
				min_time == aaaa;
				info = tempInfo;
				j = i;
			}
		}
		sende=info.packet;
	
		// determine which packet we are sending
		/*keys = call sendQueue.getKeys();
		size = call sendQueue.size();
		for (i = 0; i < size; i ++) {
			info = call sendQueue.get(keys[i]);
			aaaa = info.time;
			if (min_time > aaaa) { // inefficient. Too bad!
				min_time = aaaa;
				sende = info.packet;
				j = i;
			}
		}*/
		//if (min_time == 30000) {
		//	while(!call sendQueue.isEmpty()){
		//		keys = call sendQueue.getKeys();
		//		call sendQueue.remove(keys[0]);
		//	}
		//}

		if (sende.seq == 127 || info.seq == 127) {
			call sendQueue.remove(keys[j]);
			call Timer.startOneShot(1);
			return;
		}

		// if send isn't a packet currently than we have an issue
		// if the seq num of the packet is zero, the info is supposed to act as a trigger for some event (sending data after cli_synAck_recieved, timeout for TIME_WAIT)
		if (info.seq == 0){
			if (sockets[info.socket_id].state == TIME_WAIT) {
				sockets[info.socket_id].state = CLOSED;
				sockets[info.socket_id].flag = 0;
				node_state = 0;
				call sendQueue.remove(keys[j]);

			} else if (sockets[info.socket_id].state == ESTABLISHED) {
				cli_sendData();
				call sendQueue.remove(keys[j]);

			}
		} else {
			if (sende.seq == 127 ) {
				call sendQueue.remove(keys[j]);
				call Timer.startOneShot(100);
				return;
			}
			// send the packet
			call IP.send(sende, sende.dest);
			dbg(TRANSPORT_CHANNEL, "resending packet seq: %hhu socket: no, time: %hu\n", sende.seq, sockets[info.socket_id].RTT);


			// add the packet back
			//dbg(TRANSPORT_CHANNEL, "%hu %hhu %hhu %hu!\n", info.time, info.seq, info.socket_id, sockets[info.socket_id].RTT);
			aaaa = keys[j];

			info = call sendQueue.get(keys[j]);
			info.time = sockets[info.socket_id].RTT;
			call sendQueue.remove(keys[j]);
			call sendQueue.insert(aaaa, info);

			// lower the time of all other packets so that old ones have priority

			dbg(TRANSPORT_CHANNEL, "min_time: %hu\n", min_time);

			//printSendqueue();

			//dbg(TRANSPORT_CHANNEL, "\n\n\n\n");


			size = call sendQueue.size();
			keys = call sendQueue.getKeys();
			for (i = 0; i < size; i ++) {
				info = call sendQueue.get(keys[0]);
				aaaa = keys[0];
				call sendQueue.remove(keys[0]);
				info.time -= min_time;
				//while (call sendQueue.contains(aaaa)) { // make sure that the key is not a repeat
				//	aaaa ++;
				//}
				call sendQueue.insert(aaaa, info);
			}
		} 
		//printSendqueue();

		 // reset the clock

		size = call sendQueue.size();
		if(size < 1) { // wait, this should never happen.
			dbg(TRANSPORT_CHANNEL, "finished resending packets!\n");
			return;
		} 

		keys = call sendQueue.getKeys();
		min_time = 30000;
		for (i = 0; i < size; i ++) {
			info = call sendQueue.get(keys[i]);
			aaaa = keys[i];
			if (min_time > aaaa) { // inefficient. Too bad!
				min_time = aaaa;
				j = i;
			}
		}
		//dbg(TRANSPORT_CHANNEL, "%hu!\n", min_time);

		//printSendqueue();

		//dbg(TRANSPORT_CHANNEL, "\n\n\n\n");


		call Timer.startOneShot(min_time);
		
		
		 // finish
	}


	event void events.fired() { // this literally just exists to wait for sendData to be fired
		if (sockets[0].state != ESTABLISHED) {
			call events.startOneShot(10000); // this is bad, but whatever
		} else {
			cli_sendData();
		}
	}





	/// SERVER FUNCTIONS
	// 
	command void TCP.init_server(uint8_t port) {
		node_state = 1; // will handle socket creation when a syn is recieved, for now see no reason for this function to do anything, server is entirely passive
		serv_port = port;
		dbg(TRANSPORT_CHANNEL, "server started on port %hhu\n", port);
	}

	// create a new socket and send the synack
	void srv_initSynAck(pack in_pack) {
		socket_t socket_id = 0;
		socket_store_t *active_socket;
		TCPpacket *tcpack = (TCPpacket*)in_pack.payload;
		pack send_pack;
		uint8_t i;

		socket_id = get_socket(*tcpack);

		//dbg(TRANSPORT_CHANNEL, "%hhu\n", socket_id);

		if (socket_id != 0) {
			return;
		}
		socket_id = 1;

		init_socket(&socket_id, tcpack -> destp, tcpack -> src, tcpack -> srcp);
		active_socket = &sockets[socket_id];
		active_socket -> state = SYN_RCVD;

		socket_seq[socket_id] = 1;
		socket_nextAck[socket_id] = in_pack.seq + 1;
		socket_highAck[socket_id] = in_pack.seq;

		makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, in_pack.seq, in_pack.seq, SYNACK, SOCKET_BUFFER_SIZE, 0, 0);
		
		makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, socket_seq[socket_id], (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
		send_packet(send_pack, socket_id, 0);

		for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
			active_socket -> rcvdBuff[i] = 0;
		}
		
		socket_seq[socket_id] ++;

		dbg(TRANSPORT_CHANNEL, "Synack sent to node %hhu, socket %hhu\n", active_socket -> dest.addr, socket_id);
	}

	void srv_toEstablished(socket_t socket_id) {
		sockets[socket_id].state = ESTABLISHED;
		//dbg(TRANSPORT_CHANNEL, "CONNECTION TO ESTABLISHED: %hhu\n", sockets[socket_id].addr.addr);
	}

	void srv_handleData(pack in_pack, socket_t socket_id) {
		socket_store_t *active_socket = &sockets[socket_id];
		TCPpacket *tcpack = (TCPpacket*)in_pack.payload;
		uint8_t temp;
		uint8_t i;
		
		dbg(TRANSPORT_CHANNEL, "DATA FROM NODE %hu, %hhu RECIVED\n", in_pack.src, in_pack.seq);

		//for(i = 0; i < 6; i++) {
		//		dbg(TRANSPORT_CHANNEL, "Reading Data: %hu\n", ((uint16_t*)(tcpack -> payload))[i]);
		//	}

		temp = tcpack -> seq + 12;
		if (temp - active_socket -> lastRead > SOCKET_BUFFER_SIZE) {
			temp = SOCKET_BUFFER_SIZE + active_socket -> lastRead;
		}

		if (active_socket -> lastRcvd < temp) {
			active_socket -> lastRcvd = temp;
		}

		temp = SOCKET_BUFFER_SIZE - tcpack -> seq + active_socket -> lastRead;
		//if (temp > 12) {
			temp = 12;
		//}
		if (active_socket -> rcvdBuff[tcpack -> seq- active_socket -> lastRead] == 0 && active_socket -> lastRead <= tcpack -> seq) { // new data
			

			//active_socket -> nextExpected ++;
			//for(i = 0; i < 6 && tcpack -> seq + i * 2 - active_socket -> lastRead < SOCKET_BUFFER_SIZE; i++) {
				//dbg(TRANSPORT_CHANNEL, "Reading Data: %hu,,, %hhu\n", ((uint16_t*)(tcpack -> payload))[i], tcpack -> seq + i * 2);
				//active_socket -> rcvdBuff[tcpack -> seq + i] = tcpack -> payload[i];
				//active_socket -> rcvdBuff[tcpack -> seq + i - 1] = tcpack -> payload[i - 1];
			//}
			//dumpRcvdbuff(socket_id);
			for(i = 0; i < 12 && tcpack -> seq + i - active_socket -> lastRead < SOCKET_BUFFER_SIZE; i++) {
				active_socket -> rcvdBuff[tcpack -> seq + i - active_socket -> lastRead] = tcpack -> payload[i];
			}

			active_socket -> nextExpected += temp;
			if (active_socket -> nextExpected - active_socket -> lastRead >= SOCKET_BUFFER_SIZE && active_socket -> lastRcvd - active_socket -> lastRead >= SOCKET_BUFFER_SIZE) { // if we have gotten all the data we can so far
				dbg(TRANSPORT_CHANNEL, "gotten all data\n");

				dumpRcvdbuff(socket_id);
				for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
					active_socket -> rcvdBuff[i] = 0;
				}
				active_socket -> lastRead = SOCKET_BUFFER_SIZE;
			}
		}
	}

	void srv_initFinAck(socket_t socket_id) {
		socket_store_t *active_socket = &sockets[socket_id];
		pack send_pack;

		makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, 0, 0, FIN, SOCKET_BUFFER_SIZE, 0, 0);
		makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, 1, (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
		send_packet(send_pack, socket_id, 0);

		active_socket -> state = LAST_ACK;
		dbg(TRANSPORT_CHANNEL, "FINACK TO  %hhu\n", active_socket -> dest.addr);

	}


	command void TCP.srv_send(uint8_t target, uint8_t *msg, uint8_t size) { // this assumes that at least one connection is enabled
		// send data to the target, using the socket buffer
		/// AAAAAAAAAAAAA
		socket_store_t *active_socket;
		socket_t socket_id;
		uint8_t i;

		for (i = 1; i < MAX_NUM_OF_SOCKETS; i++) {
			if (sockets[i].dest.addr == target) {
				socket_id = i;
				break;
			}
		}
		active_socket = &sockets[socket_id];

		for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
			active_socket -> sendBuff[i] = 0;
		}

		memcpy(active_socket -> sendBuff, msg, size);
		active_socket -> lastSent = 0;
		active_socket -> lastAck = 0;
		active_socket -> lastWritten = size;
		active_socket -> effectiveWindow = SOCKET_BUFFER_SIZE;

		dbg(APPLICATION_CHANNEL, "send buffer: %s, socket %hhu:, dest: %hhu\n", active_socket -> sendBuff, socket_id, target);
		
		srv_send_data(socket_id);
	}

	void srv_send_data (socket_t socket_id) { // basically cli_sendData but better
		socket_store_t *active_socket = &sockets[socket_id];
		uint8_t send_data;
		pack send_pack;
		uint8_t i;
		
		if (active_socket -> effectiveWindow > 0 && active_socket -> lastSent <= active_socket -> lastWritten) {
			send_data = active_socket -> effectiveWindow;
			if (send_data > (active_socket -> lastWritten - active_socket -> lastSent) * 2) {
				send_data = (active_socket -> lastWritten - active_socket -> lastSent) * 2;
			}

			if (send_data > 12) {
				send_data = 12;
			}
			//cli_data_sent += send_data / 2;

			//dbg(TRANSPORT_CHANNEL, "%hu ,,, %hhu\n", cli_data_sent, send_data);
			
			//for (i = 0; i < 6; i++) {
				//dbg(TRANSPORT_CHANNEL, "%hu\n", active_socket -> RTT);
			//}

			makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, active_socket -> lastSent, 0, DATA, SOCKET_BUFFER_SIZE, (uint8_t*)(active_socket -> sendBuff + active_socket -> lastSent), send_data);
			makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, socket_seq[socket_id] + 1, (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
			send_packet(send_pack, socket_id, (uint16_t)(socket_seq[socket_id]));
			//dbg(TRANSPORT_CHANNEL, "EEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
			//for (i = 0; i < 12; i++) {
			//	dbg(TRANSPORT_CHANNEL, "%hu\n", tcp_pack.payload[i]);
			//}
			dbg(APPLICATION_CHANNEL, "sending %s\n", tcp_pack.payload);

			socket_seq[socket_id] ++;

			active_socket -> lastSent += send_data;
			active_socket -> effectiveWindow -= send_data;
			srv_send_data(socket_id);
		}
	}








	/// CLIENT FUNCTIONS
	// initiates a test version of the client, which sends a string of numbers
	command void TCP.init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer) {
		uint8_t i;
		uint16_t v;
		socket_t socket = 0;
		socket_store_t *active_socket;
		//TCPpacket tcp_pack;
		pack send_pack;

		// create the base socket
		init_socket(&socket, srcp, dest, destp);
		// modify necessary variables	
		active_socket = &sockets[socket];
		active_socket -> state = SYN_SENT;
		
		for (v = 0; v < transfer; v++) {
			data_to_send[v] = v + 1;

		}

		// transfers the data to the cache		
		if (SOCKET_BUFFER_SIZE > transfer) {
			memcpy(active_socket -> sendBuff, data_to_send, SOCKET_BUFFER_SIZE);
			active_socket -> lastWritten = SOCKET_BUFFER_SIZE;
			//cli_data_sent = SOCKET_BUFFER_SIZE;

		} else {
			memcpy(active_socket -> sendBuff, data_to_send, transfer);
			active_socket -> lastWritten = transfer;
			//cli_data_sent = transfer;
		}
		cli_data_to_send = transfer;
		cli_data_sent = 0;

		socket_seq[socket] = 1;


		makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, 0, 0, SYN, SOCKET_BUFFER_SIZE, 0, 0);
		makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, socket_seq[socket], (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
		send_packet(send_pack, socket, 0);
		node_state = 2;
		// at this point the packet should be resent until synack is recieved
		dbg(TRANSPORT_CHANNEL, "initiating connection with node %hhu\n", dest);
	}

	command void TCP.cli_connect(uint8_t port) {
		// begin syn synack ack process, then stop and wait
		uint8_t i;
		uint16_t v;
		socket_t socket = 0;
		socket_store_t *active_socket;
		//TCPpacket tcp_pack;
		pack send_pack;

		// create the base socket
		init_socket(&socket, port, 1, 41);
		// modify necessary variables	
		active_socket = &sockets[socket];
		active_socket -> state = SYN_SENT;
	
		socket_seq[socket] = 1;


		makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, 0, 0, SYN, SOCKET_BUFFER_SIZE, 0, 0);
		makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, socket_seq[socket], (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
		send_packet(send_pack, socket, 0);
		node_state = 2;
	}

	command void TCP.cli_send(uint8_t *msg, uint8_t size) {
		socket_store_t *active_socket = &sockets[0];
		uint8_t i;

		for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
            active_socket -> sendBuff[i] = 0;
        }
		memcpy(active_socket -> sendBuff, msg, size);
		active_socket -> lastSent = 0;
		active_socket -> lastAck = 0;
		active_socket -> lastWritten = size;

		dbg(APPLICATION_CHANNEL, "%s\n", active_socket -> sendBuff);

		cli_data_sent = 0;
		cli_data_to_send = size / 2 + 1; // not changing the fact that this is meant for 2 byte nums

		if (active_socket -> state != ESTABLISHED) {
			call events.startOneShot(5000); // wait 5 seconds for the connection to be initialized
		}else {
			cli_sendData();
		}
	}



	void cli_synAck_recieved(pack in_pack) {
		socket_store_t *active_socket = &sockets[0];
		TCPpacket *temp = (TCPpacket*)in_pack.payload;
		tcpQueueInfo info;

		
		dbg(TRANSPORT_CHANNEL, "synack recieved from %hhu, %hhu\n", in_pack.src, temp->seq);
		
		
		handle_ack(temp->seq, 0);

		active_socket -> state = ESTABLISHED;
		active_socket -> effectiveWindow = temp -> advwin;

		info.packet.seq = 0;
		info.socket_id = 0;
		info.seq = 0;
		info.time = active_socket -> RTT;
		call sendQueue.insert(info.time, info);
		
		if (!(call Timer.isRunning())) {
			call Timer.startOneShot(info.time); // wait until the rtt of the timer is over
		} else if ((call Timer.getdt() + call Timer.gett0()) > (call Timer.getNow() + info.time)) {
			call Timer.startOneShot(info.time); // replace the next timer firing with this if it will happen sooner (expecting ack from cost 6 packet, sending 1 cost packet)
		}

		send_ack(in_pack, 0);
	}

	void cli_sendData() {
		socket_store_t *active_socket = &sockets[0];
		uint8_t send_data;
		pack send_pack;
		uint8_t i;
		//dbg(TRANSPORT_CHANNEL, "node sending data, last sent %hu, effectiveWindow\n");
		

		// if lastSent < lastAck + effectiveWindow
		// send up to lastAck + effectiveWindow
		if (active_socket -> effectiveWindow > 0 && cli_data_to_send != cli_data_sent) {
			

			send_data = active_socket -> effectiveWindow;
			if (send_data > (cli_data_to_send - cli_data_sent) * 2) {
				send_data = (cli_data_to_send - cli_data_sent) * 2;
			}

			if (send_data > 12) {
				send_data = 12;
			}
			cli_data_sent += send_data / 2;

			dbg(TRANSPORT_CHANNEL, "%hu ,,, %hhu\n", cli_data_sent, send_data);
			
			//for (i = 0; i < 6; i++) {
				//dbg(TRANSPORT_CHANNEL, "%hu\n", active_socket -> RTT);
			//}

			makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, active_socket -> lastSent, 0, DATA, SOCKET_BUFFER_SIZE, (uint8_t*)(active_socket -> sendBuff + active_socket -> lastSent), send_data);
			//dbg(APPLICATION_CHANNEL, "%s\n", tcp_pack.payload);
			makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, socket_seq[0] + 1, (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
			send_packet(send_pack, 0, (uint16_t)(socket_seq[0]));
			//dbg(TRANSPORT_CHANNEL, "EEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
			//for (i = 0; i < 12; i++) {
			//	dbg(TRANSPORT_CHANNEL, "%hu\n", tcp_pack.payload[i]);
			//}


			socket_seq[0] ++;

			active_socket -> lastSent += send_data;
			active_socket -> effectiveWindow -= send_data;
			cli_sendData();
		}
	}

	void cli_interpretAck(pack in_pack) { // begins teardown if all data is sent
		TCPpacket *temp;
		
		handle_ack(in_pack.seq, 0);
		
		temp = (TCPpacket*)(in_pack.payload);
		//dbg(TRANSPORT_CHANNEL, "%hu, %hu, %hu, %hu\n", cli_data_sent, cli_data_to_send, sockets[0].effectiveWindow, call sendQueue.size());

		if (call sendQueue.size() == 0) { // only increase the size of the advertised window after packets are increased
			sockets[0].effectiveWindow = temp -> advwin;
			//dbg(TRANSPORT_CHANNEL, "%hu, %hu, %hu, %hu\n", cli_data_sent, cli_data_to_send, sockets[0].effectiveWindow, call sendQueue.size());

		}
		//dbg(TRANSPORT_CHANNEL, "%hu, %hu, %hu, %hu\n", cli_data_sent, cli_data_to_send, sockets[0].effectiveWindow, call sendQueue.size());
		//if (call sendQueue.size() == 0 && cli_data_sent >= cli_data_to_send && sockets[0].state == ESTABLISHED) {
			// teardown
			//dbg(TRANSPORT_CHANNEL, "beginning teardown\n");
			//cli_beginShutdown();
		//} else if(sockets[0].state == ESTABLISHED){
			//cli_sendData();
		//}

	}

	void cli_beginShutdown() {
		pack send_pack;
		socket_store_t *active_socket = &sockets[0];

		makeTCpack(&tcp_pack, TOS_NODE_ID, active_socket -> dest.addr, active_socket -> src, active_socket -> dest.port, 0, 0, FIN, SOCKET_BUFFER_SIZE, 0, 0);
		makePack(&send_pack, TOS_NODE_ID, active_socket -> dest.addr, MAX_TTL, PROTOCOL_TCP, 1, (uint8_t*)&tcp_pack, PACKET_MAX_PAYLOAD_SIZE);
		send_packet(send_pack, 0, 0);

		active_socket -> state = FIN_WAIT_1;
	}

	void cli_timeWait () {
		dbg(TRANSPORT_CHANNEL, "CLIENT IN TIME WAIT\n");
		sockets[0].state = CLOSED;
		sockets[0].flag = 0;
		dbg(TRANSPORT_CHANNEL, "CLIENT CLOSED\n");
	}








	/// UTILITY FUNCTIONS
	// creates the socket in an unused socket_id and sets all variabels to default values
	void init_socket(socket_t* new_socket, uint8_t local_port, uint8_t dest, uint8_t dest_port) {
		uint8_t i;
		socket_store_t* active_socket;
		socket_addr_t addr;

		// find the next empty socket
		for (i = 1; i < MAX_NUM_OF_SOCKETS && *new_socket != 0; i++) {
			//dbg(TRANSPORT_CHANNEL, "%hhu \n", sockets[i].flag);
			if (sockets[i].flag == 0) {
				*new_socket = i;
				break;
			}
		}

		// now that we have a socket, initialize all of the values to zero.
		active_socket = &sockets[*new_socket];
		active_socket -> flag = 1;
		active_socket -> state = CLOSED; // begin closed, wait for other function to set to new relevance
		active_socket -> src = local_port;
		addr.port = dest_port;
		addr.addr = dest;
		active_socket -> dest.addr = dest;
		active_socket -> dest.port = dest_port;

		// sender portion initialization
		active_socket -> lastWritten = 0; // last data that we can send
		active_socket -> lastAck = 0; 
		active_socket -> lastSent = 0;

		// receiver portion
		active_socket -> lastRead = 0;
		active_socket -> lastRcvd = 0;
		active_socket -> nextExpected = 0;

		active_socket -> RTT = 1000; // assume default 100ms RTT. As far as I can tell, a good RTT is not part of this project
		active_socket -> effectiveWindow = 0; // wait for ack to set effectiveWindow		
	}

	// why did I make this a seperate function
	void kill_socket(socket_t socket_id) {
		sockets[socket_id].flag = 0; // flag of zero is not in use
	}


	socket_t get_socket(TCPpacket tcpack) {
		uint8_t i;
		socket_t socket_id;
		socket_addr_t addr;
		addr.port = tcpack.srcp;
		addr.addr = tcpack.src;


		for (i = 1; i < MAX_NUM_OF_SOCKETS; i++) {
			//dbg(TRANSPORT_CHANNEL, "PACKET:%hhu %hhu %hhu\n", tcpack.src, tcpack.srcp, tcpack.destp);
			//dbg(TRANSPORT_CHANNEL, "SOCKET:%hhu %hhu %hhu\n", sockets[i].dest.addr,  sockets[i].dest.port, sockets[i].src );
			if (sockets[i].dest.addr == addr.addr && sockets[i].dest.port == addr.port && sockets[i].src == tcpack.destp) {
				socket_id = i;
				return socket_id;
			}
		}
		return 0;
	}

	
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length){
		Package->src = src;
		Package->dest = dest;
		Package->TTL = TTL;
		Package->seq = seq;
		Package->protocol = protocol;
		memcpy(Package->payload, payload, length);
	}

	void makeTCpack(TCPpacket *packet, uint8_t src, uint8_t dest, uint8_t srcp, uint8_t destp, uint8_t seq, uint8_t ack, uint8_t flag, uint8_t advwin, uint8_t* payload, uint8_t length) {
		uint8_t i;
		packet->src = src;
		packet->dest = dest;
		packet->srcp = srcp;
		packet->destp = destp;
		packet->seq = seq;
		packet->ack = ack;
		packet->flag = flag;
		packet->advwin = advwin;
		for (i = 0; i < 12; i++) {
			packet -> payload[i] = 0;
		}
		memcpy(packet->payload, payload, length);
	} 

	void printSendqueue() {
		uint8_t i;
		uint8_t size;
		uint32_t *keys;
		tcpQueueInfo info;
		size = call sendQueue.size();
		keys = call sendQueue.getKeys();

		for (i = 0; i < size; i++) {
			info = call sendQueue.get(keys[i]);
			dbg(TRANSPORT_CHANNEL, "sendqueue index %hhu:%hu %hhu %hhu\n",i,info.time, info.seq, info.socket_id);
		}
	}

	void dumpRcvdbuff(socket_t socket_id) {
		uint8_t i;
		for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
			dbg(TRANSPORT_CHANNEL, "reading rcvdbuff: %hhu\n", sockets[socket_id].rcvdBuff[i]);
		}

	}

	command socket_store_t * TCP.getsoc(uint8_t clientId) {
		socket_t socket_id;
		uint8_t i;

		for (i = 1; i < MAX_NUM_OF_SOCKETS; i++) {
			if (sockets[i].dest.addr == clientId) {
				socket_id = i;
				break;
			}
		}
		return &sockets[socket_id];
		
	}
	

}
