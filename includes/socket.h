#ifndef __SOCKET_H__
#define __SOCKET_H__

enum{
    MAX_NUM_OF_SOCKETS = 10,
    ROOT_SOCKET_ADDR = 255,
    ROOT_SOCKET_PORT = 255,
    SOCKET_BUFFER_SIZE = 128,
};

enum socket_state{
    CLOSED = 1,
    LISTEN = 2,
    ESTABLISHED = 3,
    SYN_SENT = 4,
    SYN_RCVD = 5,
	FIN_WAIT_1 = 6, // added by me for release purposes
	CLOSE_WAIT = 7,
	FIN_WAIT_2 = 8,
	LAST_ACK = 9,
	TIME_WAIT = 10
};


typedef nx_uint8_t nx_socket_port_t;
typedef uint8_t socket_port_t;

// socket_addr_t is a simplified version of an IP connection.
typedef nx_struct socket_addr_t{
    nx_socket_port_t port;
    nx_uint16_t addr;
}socket_addr_t;


// File descripter id. Each id is associated with a socket_store_t
typedef uint8_t socket_t;

/// MANY OF THESE COMMENTS HAVE BEEN ADDED BY ME TO KEEP TRACK OF WHAT EVERYTHING DOES

// State of a socket. 
typedef struct socket_store_t{
    uint8_t flag;
    enum socket_state state;
    socket_port_t src;
    socket_addr_t dest;

    // This is the sender portion.
    uint8_t sendBuff[SOCKET_BUFFER_SIZE]; // GETS WRITTEN TO BY APP
    uint8_t lastWritten;
    uint8_t lastAck;
    uint8_t lastSent;

    // This is the receiver portion
    uint8_t rcvdBuff[SOCKET_BUFFER_SIZE]; // SENDS TO APP, THEN FLUSHES FOR NEW DATA
    uint8_t lastRead; // what we have read so far (not going to use this, will just clear the buffer after the app reads the existing data)
    uint8_t lastRcvd; // what the last byte recieved was  
    uint8_t nextExpected; // what byte we should write to next, I use this to understand if we can clear the buffer

    uint16_t RTT;
    uint8_t effectiveWindow;
}socket_store_t;

#endif
