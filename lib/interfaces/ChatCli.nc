//#include "../../Comma"

interface ChatCli{
    command void handle_packet(pack *in_pack); // interprets incomming packets
    command void handle_cmd(uint8_t* payload);
}