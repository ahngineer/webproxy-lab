#include "csapp.h"

// returns : value in network byte order
uint32_t htonl(uint32_t hostlong);
uint16_t htons(uint16_t hostshort);


// returns : value in host byte 
uint32_t ntohl(uint32_t netlong);               
uint16_t ntohs(uint16_t netshort);


// 1  if OK, 
// 0  if src is invalid dotted decimal, 
// -1 on error.
int inet_pton(AF_INET, const char *src, void *dst);

// pointer to a dotted-decimal string if OK, NULL on error
const char *inet_ntop(AF_INET, const void *src, char *dst, socketlen_t size);)
