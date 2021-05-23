/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

typedef void (^CDUnknownBlockType)(void);

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};
