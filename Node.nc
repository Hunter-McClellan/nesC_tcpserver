/*
 * ANDES Lab - University of California, Merced
 * This class provides the basic functions of a network node.
 *
 * @author UCM ANDES Lab
 * @date   2013/09/03
 *
 */
#include <Timer.h>
#include "includes/command.h"
#include "includes/packet.h"
#include "includes/CommandMsg.h"
#include "includes/sendInfo.h"
#include "includes/channels.h"

module Node{
   uses interface Boot;

   uses interface SplitControl as AMControl;
   uses interface Receive;

   //uses interface SimpleSend as Sender;

   uses interface CommandHandler;

	// by defaul uses flooding
   uses interface Flooding;
   uses interface NeighborDiscovery;

   uses interface LinkStateRouting;
   uses interface IP;
   uses interface TCP;
   uses interface Room;
   uses interface ChatCli;
}

implementation{
   pack sendPackage;

   // Prototypes
   void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);

   event void Boot.booted(){
      call AMControl.start();

      dbg(GENERAL_CHANNEL, "Booted\n");

		call IP.init();
		//call LinkStateRouting.begin();
	   //call NeighborDiscovery.boot();
   }

   event void AMControl.startDone(error_t err){
      if(err == SUCCESS){
         dbg(GENERAL_CHANNEL, "Radio On\n");
      }else{
         //Retry until successful
         call AMControl.start();
      }
   }

   event void AMControl.stopDone(error_t err){}

	event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
		pack* myMsg;
		//dbg(GENERAL_CHANNEL, "Packet Received by %d\n", TOS_NODE_ID);
      	if(len!=sizeof(pack)){
			dbg(GENERAL_CHANNEL, "Unknown Packet Type %d\n", len);
			return msg;
 	    }
		

		myMsg=(pack*) payload;
		//dbg(TRANSPORT_CHANNEL, "VVVV\n");
		if (myMsg->protocol == PROTOCOL_TCP) {
			if (TOS_NODE_ID == 1) {
            call Room.handle_packet(myMsg);
         } else {
            call ChatCli.handle_packet(myMsg);
         }
         
         //call TCP.handle_packet(*myMsg);
			return msg;
		}

		call IP.packet_recived(*myMsg);
		return msg;
		//if (myMsg -> dest == AM_BROADCAST_ADDR) { // will use this for neighbor disc
		//	//dbg(GENERAL_CHANNEL, "ND ping recieved\n", myMsg->payload);
		//	
		//	//NeighborDiscovery.disc_message_recieved(*myMsg);
		//	return msg;
		//}
		//if (myMsg -> dest != TOS_NODE_ID) { // If the message hasnt arrived at the correct place
		//	call Flooding.send_down_line(*myMsg);
		//	return msg;
		//}
		dbg(GENERAL_CHANNEL, "Package Payload: %s\n", myMsg->payload);
		return msg;
   }


   event void CommandHandler.ping(uint16_t destination, uint8_t *payload){
      dbg(GENERAL_CHANNEL, "PING EVENT \n");
      makePack(&sendPackage, TOS_NODE_ID, destination, 0, 0, 0, payload, PACKET_MAX_PAYLOAD_SIZE);
      call IP.send(sendPackage, destination);
   }

   event void CommandHandler.printNeighbors(){
	   call NeighborDiscovery.print_neighbors();
   }

   event void CommandHandler.printRouteTable(){
	   call LinkStateRouting.dumpRT();
   }

   event void CommandHandler.printLinkState(){
	   call LinkStateRouting.dumpLS();
	}

   event void CommandHandler.printDistanceVector(){}

   event void CommandHandler.setTestServer(uint8_t port){
	   call TCP.init_server(port);
   }

   event void CommandHandler.setTestClient(uint8_t dest, uint8_t srcPort, uint8_t destPort, uint8_t transfer1, uint8_t transfer2){
	   //dbg(TRANSPORT_CHANNEL, "TESTCLI CALLED\n");
	   uint8_t transfer[2];
	   transfer[0] = transfer1;
	   transfer[1] = transfer2;
	   call TCP.init_cli(dest, srcPort, destPort, *(uint16_t*)transfer);
   }

   event void CommandHandler.setAppServer(){
      call Room.start();
   }

   event void CommandHandler.setAppClient(uint8_t * payload){
      call ChatCli.handle_cmd(payload);
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
