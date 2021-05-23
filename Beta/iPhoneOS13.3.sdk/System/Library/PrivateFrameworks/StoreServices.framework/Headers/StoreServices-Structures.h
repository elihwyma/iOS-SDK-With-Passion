/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CGSize {
    double _field1;
    double _field2;
};

struct FPSubscriptionInfo_ {
    unsigned long long _field1;
    int _field2;
};

struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID[20];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

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
