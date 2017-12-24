#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

int main() {

    char server_message[256] = 'You have reached the server!';

    int server_socket;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    
    return 0;
}
