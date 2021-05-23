/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct _SYSTEMTIME {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
    short _field5;
    short _field6;
    short _field7;
    short _field8;
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    int _field1;
    unsigned short _field2[32];
    struct _SYSTEMTIME _field3;
    int _field4;
    unsigned short _field5[32];
    struct _SYSTEMTIME _field6;
    int _field7;
} CDStruct_7681c444;
