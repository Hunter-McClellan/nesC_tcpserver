#include "../../includes/packet.h"
#include <Timer.h>

configuration NeighborDiscoveryC {
	provides interface NeighborDiscovery;
}

implementation {
	components NeighborDiscoveryP;
	NeighborDiscovery = NeighborDiscoveryP;

	components new TimerMilliC() as Timer;
	NeighborDiscoveryP.Timer -> Timer;

	components new HashmapC(uint8_t, 20); 
	NeighborDiscoveryP.Neighbors -> HashmapC;

	components new SimpleSendC(AM_PACK); 
	NeighborDiscoveryP.Sender -> SimpleSendC;
}