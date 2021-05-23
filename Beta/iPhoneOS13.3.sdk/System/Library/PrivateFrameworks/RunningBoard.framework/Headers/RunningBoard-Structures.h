/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

typedef void (^CDUnknownBlockType)(void);

struct NSString {
    Class _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;
