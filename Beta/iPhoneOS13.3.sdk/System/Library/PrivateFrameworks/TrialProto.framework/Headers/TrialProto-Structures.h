/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@class NSData, NSOutputStream, NSString, TRIPBMessage;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct TRIPBExtensionDescription {
    CDUnion_a49d1a5a _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    CDUnknownFunctionPointerType _field5;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct TRIPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct TRIPBMessageFieldDescription {
    char *_field1;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct TRIPBMessage_Storage {
    unsigned int _field1[0];
};

struct TRIPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

typedef union {
    _Bool valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    TRIPBMessage *valueMessage;
    int valueEnum;
} CDUnion_a49d1a5a;
