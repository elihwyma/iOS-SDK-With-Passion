/*
 Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct LogCategory {
    int _field1;
    int _field2;
    char *_field3;
    unsigned int _field4;
    char *_field5;
    char *_field6;
    int _field7;
    struct LogCategory *_field8;
    struct LogOutput *_field9;
    struct LogOutput *_field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned int _field13;
    unsigned int _field14;
    char *_field15;
    struct LogCategoryPrivate *_field16;
};

struct LogCategoryPrivate;

struct LogOutput;

struct NSMutableDictionary {
    Class _field1;
};

struct OpaqueAPBrowserBTLEManager {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    id _field2;
};

typedef struct {
    unsigned char flags;
    unsigned char config;
    unsigned char ipv4[4];
} CDStruct_b2d45402;
