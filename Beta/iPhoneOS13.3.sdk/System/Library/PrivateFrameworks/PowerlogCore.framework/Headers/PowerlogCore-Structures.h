/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

typedef void (^CDUnknownBlockType)(void);

struct Manager;

struct _PLTimeIntervalRange {
    double location;
    double length;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct mach_timebase_info {
    unsigned int _field1;
    unsigned int _field2;
};

struct shared_ptr<abm::client::Manager> {
    struct Manager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct timeval {
    long long _field1;
    int _field2;
};
