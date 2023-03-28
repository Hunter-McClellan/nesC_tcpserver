#include "../../includes/packet.h"

configuration FloodingC{
	provides interface Flooding;
}

implementation{
	components FloodingP;
	Flooding = FloodingP;

	// the Hashmap
	components new HashmapC(uint16_t, 20); // based this on CommandHandlerC.nc
	FloodingP.prior_packets -> HashmapC;

	components new SimpleSendC(AM_PACK); // based on NodeC.nc, not sure what it does
	FloodingP.Sender -> SimpleSendC;
}
