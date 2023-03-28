configuration RoomC {
    provides interface Room;
}

implementation {
    components RoomP;
    Room = RoomP;

    components new HashmapC(char*, 4) as clients;
    RoomP.clients -> clients;

    components new TimerMilliC() as Timert;
	RoomP.Timert -> Timert;

    components TCPC;
    RoomP.TCP -> TCPC;
}