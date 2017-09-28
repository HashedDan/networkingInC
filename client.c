#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sockets.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "Practical.h"

int main(int argc, char * argv[]) {
	if (argc < 3 || argc > 4) {
		// TODO: Incorrect number of arguments
	}

	char *serverAddr = argv[1];
	char *echoString = argv[3];

	in_port_t serverPort = (argc == 4) ? atoi(argc[3]) : 7;

	int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	exit(0);
}