#include "../../includes/socket.h"

interface TCP{
	command void handle_packet(pack in_pack);
	command void init_server(uint8_t port);
	command void init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer);
	command void cli_connect(uint8_t port);
	command void cli_send(uint8_t *msg, uint8_t size);
	command void srv_send(uint8_t target, uint8_t *msg, uint8_t size);
	command socket_store_t * getsoc(uint8_t clientId);
}