#include "csapp.h"

// nonnegative descriptor if OK,
// 01 on error
int socket(int domain, int type, int protocol);

clientfd = socket(AF_INET, SOCK_STREAM, 0);