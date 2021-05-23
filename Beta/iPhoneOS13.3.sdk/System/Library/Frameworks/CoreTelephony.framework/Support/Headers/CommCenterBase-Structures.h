/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
 */

typedef void (^CDUnknownBlockType)(void);

struct OSSharedRef<os_log_s> {
    struct os_log_s *fRef;
};

struct OsLogContext {
    char *domain;
    struct OSSharedRef<os_log_s> handle;
};

struct dispatch_object_s;

struct function<void ()> {
    struct __value_func<void ()> {
        struct type _field1;
        struct __base<void ()> *_field2;
    } _field1;
};

struct object {
    struct dispatch_object_s *fObj;
};

struct os_log_s;

struct queue {
    struct object fObj;
};

struct type {
    unsigned char _field1[24];
};

// Template types
typedef struct function<void ()> {
    struct __value_func<void ()> {
        struct type _field1;
        struct __base<void ()> *_field2;
    } _field1;
} function_445bca8f;
