#include <Timer.h>
#include "../../includes/tcp_queue_info.h"

configuration TCPC {
	provides interface TCP;
}

implementation {
	components TCPP;
	TCP = TCPP;

	components new TimerMilliC() as Timer;
	TCPP.Timer -> Timer;
	
	components new TimerMilliC() as events;
	TCPP.events -> events;
	
	components IPC;
	TCPP.IP -> IPC;

	components new HashmapC(tcpQueueInfo, 40) as sendQueue;
	TCPP.sendQueue -> sendQueue;
}