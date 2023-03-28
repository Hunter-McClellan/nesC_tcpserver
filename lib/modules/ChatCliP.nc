#include "../../includes/packet.h"
#include "../../includes/CommandMsg.h"

module ChatCliP {
    provides interface ChatCli;

    //uses interface Hashmap<char*> as clients;
    uses interface Timer<TMilli> as Timer;
    uses interface TCP;
}

implementation {
    char commandBuffer[256]; // holds commands until fully sent
    char sendBuffer[256]; // holds what we want to send until it is fully sent
    char recievedBuffer[256]; // holds incoming messages until fully sent
    uint8_t cmdB_size = 0, sndB_size = 0, rcvB_size = 0;



    /// predeclaration


    

    // reads the first word and determines what the client should do
    void interpret_cmd();

    /// definition




    // passes the packet to TCP for processing, starts oneshot timer to check if TCP after packet processing has new completed information (then prints if true)
    command void ChatCli.handle_packet (pack *in_pack) {
        // should just store the packet in the buffer until \r\n is recieved
        //dbg(APPLICATION_CHANNEL, "packet recievd %s\n");
        call TCP.handle_packet(*in_pack);

        call Timer.startOneShot(1);
    }

    event void Timer.fired() {
        socket_store_t *socket;
        uint8_t i = 0;
        uint8_t infoIndex = 127;

        socket = (socket_store_t*)(call TCP.getsoc(1));
        while (socket -> rcvdBuff[infoIndex] != '\n' && socket -> rcvdBuff[infoIndex - 1] != '\r' && infoIndex > 2) {
            infoIndex --;
        }
        if (infoIndex <= 3) {
            return; // unfinished command
        }
        dbg(APPLICATION_CHANNEL, "rcvs: %s\n", socket -> rcvdBuff);
        dbg(APPLICATION_CHANNEL, "Flushing Socket buffer to node %hhu\n", 1);
        for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
            socket -> rcvdBuff[i] = 0;
        }
        socket -> lastRcvd = 0;
        socket -> nextExpected = 0;
        socket -> lastRead = 0;
        
    }

    // determines if this packet is the end of the 
    command void ChatCli.handle_cmd(uint8_t * payload) {
        uint8_t i;
        uint8_t end = 0; // becomes 1 if the end sequence is found in the payload.
        

        for (i = CMD_PACKET_MAX_PAYLOAD_SIZE - 1; i > 0; i--) {
            if (payload[i] == '\n' && payload[i-1] == '\r') { // if this is the end of the command
                end = 1;
                break;
            }
        }

        dbg(APPLICATION_CHANNEL, "%hhu\n", payload[i]);
        

        if (end) {
            memcpy(commandBuffer + cmdB_size, payload, i + 1);
            cmdB_size += i + 1;
            commandBuffer[cmdB_size + 1] = 0; // ensure that when printing it works
            interpret_cmd();

        } else { // copy the payload into the command buffer
            memcpy(commandBuffer + cmdB_size, payload, CMD_PACKET_MAX_PAYLOAD_SIZE - 1);
            cmdB_size += CMD_PACKET_MAX_PAYLOAD_SIZE - 1;
        }
    }

    void interpret_cmd() {
        uint8_t cmd_type = 0;
        uint8_t i = 0, j = 0;
        uint8_t temp_port = 0;

        dbg(APPLICATION_CHANNEL, "%hhu: %s\n", cmdB_size, (uint8_t *)commandBuffer);
        

        // copy it to the socket send buffer
        if (commandBuffer[0] == 'h') {
            // remove the port, then connect to the server. {sidenote: the port must be between 0 and 9}
            while (i < 2) {
                if (commandBuffer[j] == ' ') {
                    i ++;
                }
                j ++;
            }
            temp_port = commandBuffer[j];
            commandBuffer[j-1] = '\r';
            commandBuffer[j] = '\n';
            commandBuffer[j + 1] = 0;
            cmdB_size -= 1;

            //dbg(APPLICATION_CHANNEL, "port: %hhu\n", temp_port);
            call TCP.cli_connect(temp_port);
            call TCP.cli_send(commandBuffer, cmdB_size);
        } else if (commandBuffer[0] == 'm') {
            // 
            call TCP.cli_send(commandBuffer, cmdB_size);
        } else if (commandBuffer[0] == 'w') {
            // send the message to the target
            call TCP.cli_send(commandBuffer, cmdB_size);
        } else if (commandBuffer[0] == 'l') {
            // send the mesage to the client
            call TCP.cli_send(commandBuffer, cmdB_size);
        }



        cmdB_size = 0;
    }

}