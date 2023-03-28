configuration ChatCliC {
    provides interface ChatCli;
}

implementation {
    components ChatCliP;
    ChatCli = ChatCliP;

    components new TimerMilliC() as Timer;
	ChatCliP.Timer -> Timer;

    components TCPC;
    ChatCliP.TCP -> TCPC;
}