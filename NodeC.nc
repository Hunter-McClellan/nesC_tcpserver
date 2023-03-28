/**
 * ANDES Lab - University of California, Merced
 * This class provides the basic functions of a network node.
 *
 * @author UCM ANDES Lab
 * @date   2013/09/03
 *
 */

#include <Timer.h>
#include "includes/CommandMsg.h"
#include "includes/packet.h"

configuration NodeC{
}
implementation {
    components MainC;
    components Node;
    components new AMReceiverC(AM_PACK) as GeneralReceive;

    Node -> MainC.Boot;

    Node.Receive -> GeneralReceive;

    components ActiveMessageC;
    Node.AMControl -> ActiveMessageC;

 //   components new SimpleSend(AM_PACK);
//    Node.Sender -> SimpleSend;

	// uses my flooding instead now I guess?
	components FloodingC;
	Node.Flooding -> FloodingC;

	components NeighborDiscoveryC;
	Node.NeighborDiscovery -> NeighborDiscoveryC;

	components LinkStateRoutingC;
	Node.LinkStateRouting -> LinkStateRoutingC;

	components IPC;
	Node.IP -> IPC;

	components TCPC;
	Node.TCP -> TCPC;

	components RoomC;
	Node.Room -> RoomC;

	components ChatCliC;
	Node.ChatCli -> ChatCliC;

    components CommandHandlerC;
    Node.CommandHandler -> CommandHandlerC;
}
