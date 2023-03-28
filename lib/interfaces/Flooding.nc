#include "../../includes/packet.h"

interface Flooding{
	command void send(pack in_pack, uint16_t destination); // this is basicall,y like a header from what I understand
	command void send_down_line(pack in_pack);
}
