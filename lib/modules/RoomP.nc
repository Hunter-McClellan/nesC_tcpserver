#include "../../includes/packet.h"
#include "../../includes/socket.h"

module RoomP {
    provides interface Room;

    uses interface Hashmap<char*> as clients; // key is node ID
    uses interface Timer<TMilli> as Timert;
    uses interface TCP;
}

implementation {
    uint8_t buffer[128];
    uint8_t relNode = 0;
    char usr1[16];
    char usr2[16];
    char usr3[16];
    char usr4[16];

    command void Room.handle_packet(pack *in_pack) {
        if (in_pack -> payload[6] != 3) { // only do the stuff that follows if this is data ( so that the username can be interpreted)
            call TCP.handle_packet(*in_pack);
            return;
        }
        relNode = in_pack -> src;
        call Timert.startOneShot(1); // wait for TCP to process the packet

        
        call TCP.handle_packet(*in_pack);
    }

    event void Timert.fired() {
        socket_store_t *socket;
        uint8_t i = 0, j = 0;
        uint8_t infoIndex = 1;
        char *word;
        uint32_t *users;

        //return;

        socket = (socket_store_t*)(call TCP.getsoc(relNode));
        //infoIndex = socket -> lastRcvd;
        while (socket -> rcvdBuff[infoIndex] != '\n' && socket -> rcvdBuff[infoIndex - 1] != '\r' && infoIndex < 127) {
            infoIndex ++;
        }
        if (infoIndex >= 127) {
            return; // unfinished command
        }

        // why
        dbg(APPLICATION_CHANNEL, "%s\n", socket -> rcvdBuff);
        dbg(APPLICATION_CHANNEL, "%hhu --- %hhu\n", socket -> lastRcvd, socket -> nextExpected);
        dbg(APPLICATION_CHANNEL, "%hhu:: %hhu --- %hhu\n", infoIndex, socket -> rcvdBuff[infoIndex - 1], socket -> rcvdBuff[infoIndex]);
        //return; 

        if (socket -> rcvdBuff[infoIndex] == '\n' && socket -> rcvdBuff[infoIndex - 1] == '\r' && socket -> lastRcvd >= socket -> nextExpected - 12) {
            
                
                
            dbg(APPLICATION_CHANNEL, "Room recieved full message\n");
            //valid message end, and no gaps exist in the buffer
            if (socket -> rcvdBuff[0] == 'h') {
                i = call clients.contains(relNode);
                if (i == 0) {
                    // add to the list of clients
                    i = call clients.size();
                    if ( i == 0) {
                        for (i = 0; socket -> rcvdBuff[i + 6] != '\r'; i++) {
                            usr1[i] = socket -> rcvdBuff[i + 6];
                        }
                        usr1[i + 1] = 0;
                        //return;
                        dbg(APPLICATION_CHANNEL, "Client with usrname %s has connected\n", usr1);
                        call clients.insert(relNode, usr1);
                    } else if ( i == 1) {
                        for (i = 0; socket -> rcvdBuff[i + 6] != '\r'; i++) {
                            usr2[i] = socket -> rcvdBuff[i + 6];
                        }
                        usr2[i + 1] = 0;
                        //return;
                        dbg(APPLICATION_CHANNEL, "Client with usrname %s has connected\n", usr2);
                        call clients.insert(relNode, usr2);
                    } else if ( i == 2) {
                        for (i = 0; socket -> rcvdBuff[i + 6] != '\r'; i++) {
                            usr3[i] = socket -> rcvdBuff[i + 6];
                        }
                        usr3[i + 1] = 0;
                        //return;
                        dbg(APPLICATION_CHANNEL, "Client with usrname %s has connected\n", usr3);
                        call clients.insert(relNode, usr3);
                    } else if ( i == 3) {
                        for (i = 0; socket -> rcvdBuff[i + 6] != '\r'; i++) {
                            usr4[i] = socket -> rcvdBuff[i + 6];
                        }
                        usr4[i + 1] = 0;
                        //return;
                        dbg(APPLICATION_CHANNEL, "Client with usrname %s has connected\n", usr4);
                        call clients.insert(relNode, usr4);
                    }
                }    
            } else if (socket -> rcvdBuff[0] == 'm') {
                dbg(APPLICATION_CHANNEL, "resending message to %hhu\n", relNode);
                word = call clients.get(relNode);
                for (i = 0; word[i] != 0; i++) {
                    buffer[i] = word[i];
                }
                memcpy(buffer + i, socket -> rcvdBuff, socket -> lastRcvd);
                infoIndex = i + socket -> lastRcvd;
                users = call clients.getKeys();
                for (i = 0; i < call clients.size(); i++) {
                    dbg(APPLICATION_CHANNEL, "resending message to %hhu\n", users[i]);

                    call TCP.srv_send(users[i], buffer, infoIndex);
                }
            } else if (socket -> rcvdBuff[0] == 'w') {
                infoIndex = call clients.size();
                users = call clients.getKeys();
                for (i = 0; i < infoIndex; i++) {
                    word = call clients.get(users[i]);
                    j = 0;
                    while (socket -> rcvdBuff[8 + j] > 32) {
                        if (socket -> rcvdBuff[8 + j] != word[j]) {
                            infoIndex = 5;
                        }
                        j++;
                    }
                    if (infoIndex != 5) {
                        break;
                    }
                }
                if (infoIndex == 5) {
                    dbg(APPLICATION_CHANNEL, "whisper target not found\n");
                    return;
                }
                
                j = i;
                dbg(APPLICATION_CHANNEL, "whisper target id is %hhu\n", users[i]);
                word = call clients.get(relNode);
                for (i = 0; word[i] != 0; i++) {
                    buffer[i] = word[i];
                }
                infoIndex = i + socket -> lastRcvd;
                memcpy(buffer + i, socket -> rcvdBuff, socket -> lastRcvd);

                call TCP.srv_send(users[j], buffer, infoIndex);
            }else if (socket -> rcvdBuff[0] == 'l'){
                dbg(APPLICATION_CHANNEL, "dumping clients\n");
                word = "usrs:";
                infoIndex = 0;
                for (i = 0; i < 5; i++) {
                    buffer[i] = word[i];
                    infoIndex++;
                }
                buffer[infoIndex] = ' ';
                infoIndex ++;
                for (i = 0; usr1[i] != 0; i ++) {
                    buffer[infoIndex] = usr1[i];
                    infoIndex ++;
                }
                buffer[infoIndex] = ' ';
                infoIndex ++;
                for (i = 0; usr2[i] != 0; i ++) {
                    buffer[infoIndex] = usr2[i];
                   infoIndex ++;
                }
                buffer[infoIndex] = ' ';
                infoIndex ++;
                for (i = 0; usr3[i] != 0; i ++) {
                    buffer[infoIndex] = usr3[i];
                    infoIndex ++;
                }
                buffer[infoIndex] = ' ';
                infoIndex ++;
                for (i = 0; usr4[i] != 0; i ++) {
                    buffer[infoIndex] = usr4[i];
                    infoIndex ++;
                }
                buffer[infoIndex] = '\r';
               infoIndex ++;
                buffer[infoIndex] = '\n';
                infoIndex ++;
                dbg(APPLICATION_CHANNEL, "DUMPING USRS: %s, relNode = %hhu\n", buffer, relNode);
                call TCP.srv_send(relNode, buffer, infoIndex); // Lol, lmao
            }
            dbg(APPLICATION_CHANNEL, "Flushing Socket buffer to node %hhu\n", relNode);
            for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
                socket -> rcvdBuff[i] = 0;
            }
            socket -> lastRcvd = 0;
            socket -> nextExpected = 0;
            socket -> lastRead = 0;
        } 
    }

    command void Room.start() {
        call TCP.init_server(41);
    }
}