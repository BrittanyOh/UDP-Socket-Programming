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
  int n;
  int port_num; //listening port
  int client_len;
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

  //Fill server information
  servaddr.sin_family = AF_INET;
  servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
  servaddr.sin_port = htons((unsigned short) port_num);

 //Bind socket with server Address
 if(bind(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr)) < 0){
   fprintf(stderr, "Bind failed :()");
   exit(EXIT_FAILURE);
 }
 else{
   printf("Successfully binded socket :) ... \n");
 }

 }



}
