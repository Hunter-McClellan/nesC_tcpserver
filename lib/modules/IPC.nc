#include "../../includes/packet.h"
#include <Timer.h>

configuration IPC {
	provides interface IP;
}

implementation {
	components IPP;
	IP = IPP;

	components new TimerMilliC() as Timer;
	IPP.Timer -> Timer;

	components new HashmapC(pack, 20); 
	IPP.Unconfirmed -> HashmapC;

	components new SimpleSendC(AM_PACK); 
	IPP.Sender -> SimpleSendC;

	components LinkStateRoutingC;
	IPP.LinkStateRouting -> LinkStateRoutingC;
}