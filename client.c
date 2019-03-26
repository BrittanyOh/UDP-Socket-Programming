#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

#define MAXLINE 1000

int main(int argc, char *argv[]){
  int sockfd, port_num; //listening socket and port number
  char *ipaddr;  //server's IP address
  in_addr_t data;
  char buffer[MAXLINE]; //message buffer
  struct sockaddr_in servaddr; //server address
  struct hostent *server;

  //Check commandline for correct arguments
  if (argc !=3){
    fprintf(stderr, "REQUIRED FORMAT: %s <server IP> <server port>\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  ipaddr = argv[1];
  data = inet_addr(ipaddr);
  port_num = atoi(argv[2]);

  //Creating socket
  if( (sockfd = socket(AF_INET, SOCK_DGRAM,0)) < 0){
    fprintf(stderr, "Failed to create socket. :()");
    exit(EXIT_FAILURE);
  }
  else{
    printf("Successfully created socket :) ... \n");
  }

  //Get host name by converting IP address
  server = gethostbyaddr(&data, sizeof(data),  AF_INET);
  if (server == NULL){
    fprintf(stderr, "Failed to find host for %s \n :()", ipaddr);
    exit(EXIT_FAILURE);
  }
  else{
    printf("Successfully found host :) ... \n");
  }
}
