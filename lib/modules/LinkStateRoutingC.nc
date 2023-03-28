configuration LinkStateRoutingC {
	provides interface LinkStateRouting;
}

implementation {
	components LinkStateRoutingP;
	LinkStateRouting = LinkStateRoutingP;

	components new TimerMilliC() as TimerC;
	LinkStateRoutingP.Timer -> TimerC;
	
	components NeighborDiscoveryC;
	LinkStateRoutingP.ND -> NeighborDiscoveryC;

	components FloodingC;
	LinkStateRoutingP.Flooding -> FloodingC;

	components new HashmapC(uint16_t, 33); // assuming max of 32 nodes.
	LinkStateRoutingP.RoutingTable -> HashmapC;
}