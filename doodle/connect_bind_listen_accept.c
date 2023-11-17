#include "csapp.h"

// client side, 0 OK, -1 ERROR
int connect (int clientfd, const struct sockaddr *addr, socklen_t addrlen);

// server side, 0 OK, -1 ERROR 
int bind (int sockfd, const struct sockaddr *addr, socklen_t addrlen);
// int listen ()