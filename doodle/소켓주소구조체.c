#include "csapp.h"

/* IP socket address structure */
struct sockaddr_in
{
    uint16_t        sin_family;        // Protocol family (always AF_INET)
    uint16_t        sin_port;          // 네트워크 바이트 순서의 포트 번호
    struct in_addr  sin_addr;          // 네트워크 바이트 순서의 IP 어드레스
    unsigned char   sin_zero[8];       // Pad to sizeof(struct sockaddr) 
};

/* Generic socket address structure (for connect, bind, accept) */
struct sockaddr
{
    uint16_t sa_family;                 /* 프로토콜 패밀리 */
    char     sa_data[13];               /* 어드레스 데이터 */
};

