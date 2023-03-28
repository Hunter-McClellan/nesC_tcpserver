interface LinkStateRouting {
	command void begin();
	command void packet_recived(pack in_pack);
	command uint8_t getNext(uint8_t dest);
	command uint8_t getCost(uint8_t dest);
	command void dumpLS();
	command void dumpRT();
}