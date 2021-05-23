/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

typedef void (^CDUnknownBlockType)(void);

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFString;

struct __DDQueryOffset {
    unsigned int :32;
    unsigned int :32;
};

struct __DDResult {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    CDStruct_912cb5d2 _field3;
    long long _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    struct __CFDictionary *_field9;
    long long _field10;
    unsigned char _field11;
    float _field12;
};

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;
