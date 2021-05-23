/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

struct network_uuid {
    unsigned int u1;
    unsigned short u2;
    unsigned short u3;
    unsigned char u4[8];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

typedef struct {
    unsigned int msgid;
    unsigned int status;
    unsigned int checksum;
    unsigned int reserved2;
} CDStruct_8451e1c8;
