#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define MAXLINE 1024

int main(int argc, char **argv){
  int sockfd; //socket
  int port_num; //listening port
  struct sockaddr_in servaddr; //server address
  struct sockaddr_in cliaddr; //client address
  char buffer[MAXLINE]; //message buffer
}
