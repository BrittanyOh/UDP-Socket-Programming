#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define PORT 8080
#define MAXLINE 1000

int main(int argc, char *argv[]){
  int sockfd, port_num;
  char *ipaddr;
  char buffer[MAXLINE];
  struct sockaddr_in servaddr;

  //Check commandline for correct arguments
  if (argc !=3){
    fprintf(stderr, "REQUIRED FORMAT: %s <server IP> <server port>\n", argv[0]);
    exit(EXIT_FAILURE);
  }
}
