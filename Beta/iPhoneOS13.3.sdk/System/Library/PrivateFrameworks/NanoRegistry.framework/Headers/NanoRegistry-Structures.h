/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

typedef void (^CDUnknownBlockType)(void);

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Ambiguous groups
typedef struct {
    unsigned int changeType:1;
} CDStruct_f5f6ac14;
