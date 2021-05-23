/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

typedef void (^CDUnknownBlockType)(void);

struct PFAsyncDispatchMulticaster {
    Class _field1;
};

struct PFIntSize_st {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct timespec {
    long long _field1;
    long long _field2;
};

typedef struct {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    void *_field5;
} CDStruct_98c8119d;
