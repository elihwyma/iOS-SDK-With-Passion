/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

typedef void (^CDUnknownBlockType)(void);

struct internal_state;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

typedef struct {
    unsigned char _field1;
    unsigned int _field2;
} CDStruct_95d471ab;
