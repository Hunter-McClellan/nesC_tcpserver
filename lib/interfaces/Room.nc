interface Room{
    command void handle_packet(pack *in_pack); // interprets incomming packets
    command void start(); // creates the server on port 41
}