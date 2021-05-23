/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

typedef void (^CDUnknownBlockType)(void);

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

struct kcdata_item;

struct kcdata_iter {
    struct kcdata_item *_field1;
    void *_field2;
};

struct stackshot_thread_turnstileinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned long long _field5;
};

struct stackshot_thread_waitinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned char _field4;
};
