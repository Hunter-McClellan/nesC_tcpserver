#include "../../includes/packet.h"

interface NeighborDiscovery {
	command void boot();
	command void disc_message_recieved(pack in_pack);
	command void print_neighbors();
	command uint32_t* get_Neighbors(uint8_t *num, uint8_t *has_changed);
}