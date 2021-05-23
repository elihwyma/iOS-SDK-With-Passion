/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

typedef void (^CDUnknownBlockType)(void);

struct NSArray {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSInputStream {
    Class _field1;
};

struct NSMapTable {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSOutputStream {
    Class _field1;
};

struct gzFile_s {
    unsigned int _field1;
    char *_field2;
    long long _field3;
};

struct internal_state;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

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
