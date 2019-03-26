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

  //Check commandline for correct arguments
  if (argc !=2){
    fprintf(stderr, "REQUIRED FORMAT: %s <port>\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  port_num = atoi(argv[1]); //save entered port number

  //Creating socket
  if( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0){
    fprintf(stderr, "Failed to create socket. :()");
    exit(EXIT_FAILURE);
  }
  else{
    printf("Successfully created socket :) ... \n");
  }

}
