#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstring>

#include "iostream"
#include "logger.h"

// LLVM, Google, Chromium, Mozilla, WebKit, Microsoft

#define PORT 8080
#define log(p) LOG(p)

int main() {
    const int connection_requests = 3;
    int obj_server, sock, reader;
    struct sockaddr_in address;
    int opted = 1;
    int address_length = sizeof(address);
    char buffer[1024] = {0};
    const char* message = "A message from the server";
    obj_server = socket(AF_INET, SOCK_STREAM, 0);
    if (obj_server == 0) {
        perror("Opening of socker failed!");
        std::cout << "Error: Opening of socker failed" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    if (setsockopt(obj_server, SOL_SOCKET, SO_REUSEADDR, &opted,
                   sizeof(opted))) {
        log("Can't se the socket") std::exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    if (bind(obj_server, (const struct sockaddr*)&address, sizeof(address)) <
        0) {
        log("Binding to socket failed!");
        std::exit(EXIT_FAILURE);
    }
    if (listen(obj_server, connection_requests) < 0) {
        log("Can't listen from the server");
        std::exit(EXIT_FAILURE);
    }

    int accept_result = accept(obj_server, (struct sockaddr*)&address,
                               (socklen_t*)&address_length);

    if (accept_result < 0) {
        log("Accept") std::exit(EXIT_FAILURE);
    }

    reader = read(sock, buffer, 1024);
    printf("%s\n", buffer);
    send(sock, message, std::strlen(message), 0);
    printf("Server : Message has been sent ! \n");

    LOG("Finished!");

    return 0;
}
