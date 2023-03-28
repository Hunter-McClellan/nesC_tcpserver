interface IP{
	command void init(); // I'm going to use different init commands for all of these, arent I.
	command void packet_recived(pack in_pack);
	command void send(pack in_pack, uint8_t dest); //implement later
	command uint8_t getCost(uint8_t dest);
}