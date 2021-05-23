/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

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

struct NSData {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSSet {
    Class _field1;
};

struct PairingSubstate {
    int contacts;
    int homeKit;
    int visual;
    int pairVerify;
    int pin;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
} CDStruct_56cc8428;
