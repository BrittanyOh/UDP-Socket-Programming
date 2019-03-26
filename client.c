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
  int sockfd;
  char buffer[MAXLINE];
  struct sockaddr_in servaddr;
}
