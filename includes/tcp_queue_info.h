//Author: Hunter McClellan
//Date: 11/21/2021
#ifndef TCP_QUEUE_INFO_H
#define TCP_QUEUE_INFO_H

#include "packet.h";

typedef struct tcpQueueInfo{
	pack packet; // the packet
	uint16_t time; // how much longer to wait before resending this packet
	uint8_t seq; // sequence number that this coresponds to
	uint8_t socket_id; // stores which socket this coresponds to, shouldn't cause issues with  
}tcpQueueInfo;

#endif