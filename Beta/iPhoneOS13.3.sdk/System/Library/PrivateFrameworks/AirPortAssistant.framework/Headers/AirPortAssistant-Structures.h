/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

typedef void (*CDUnknownFunctionPointerType)(void);

struct AssistantCallbackContext {
    unsigned int _field1;
    struct AssistantContext *_field2;
    int _field3;
    struct __CFDictionary *_field4;
    int _field5;
    id _field6;
    id _field7;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field8;
    void *_field9;
    long long _field10;
};

struct AssistantContext;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

typedef struct {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
} CDStruct_8a91f745;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
} CDStruct_f9662865;
