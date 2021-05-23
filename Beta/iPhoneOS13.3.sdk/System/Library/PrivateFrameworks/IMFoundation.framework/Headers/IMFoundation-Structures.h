/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

typedef void (^CDUnknownBlockType)(void);

struct IMFileLocation_t {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    int _field5;
};

struct IMPerfMeasurement_t {
    struct IMFileLocation_t _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct __CFString *_field4;
    double _field5;
    double _field6;
    double _field7;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;
