/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct BTLocalDeviceImpl;

struct BTPlatformParams {
    _Bool _field1;
    unsigned long long _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    int _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
};

struct BTRemoteContext {
    struct {
        CDUnknownFunctionPointerType _field1;
    } _field1;
    CDUnknownFunctionPointerType _field2;
    struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field3;
    struct BTSessionImpl *_field4;
    struct BTLocalDeviceImpl *_field5;
    struct BTPlatformParams _field6;
    struct BTStatus _field7;
    _Bool _field8;
};

struct BTSessionImpl;

struct BTStatus {
    unsigned long long leRemote;
    unsigned long long leAcc;
    unsigned long long btKB;
    unsigned long long a2dp;
    unsigned long long btGC;
    unsigned long long eAcc;
    unsigned long long hk;
    unsigned long long lowEnergyConnections;
    unsigned long long nonHIDConnections;
    unsigned long long connectedHIDDevices;
    unsigned long long oneSniffAttemptDevices;
    unsigned long long twoSniffAttemptDevices;
    unsigned long long sco;
    unsigned long long wiap;
    unsigned long long remote;
    unsigned long long connectedDevices;
    _Bool isScanning;
    _Bool isDiscoverable;
    _Bool isConnectable;
};

struct HTTPMessagePrivate {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct HTTPMessagePrivate *_field2;
    struct {
        char _field1[8192];
        unsigned long long _field2;
        char *_field3;
        unsigned long long _field4;
        char *_field5;
        unsigned long long _field6;
        int _field7;
        char *_field8;
        unsigned long long _field9;
        struct {
            char *_field1;
            unsigned long long _field2;
            char *_field3;
            unsigned long long _field4;
            char *_field5;
            unsigned long long _field6;
            char *_field7;
            unsigned long long _field8;
            char *_field9;
            unsigned long long _field10;
            char *_field11;
            unsigned long long _field12;
            char *_field13;
            unsigned long long _field14;
            char *_field15;
            char *_field16;
            char *_field17;
            unsigned long long _field18;
            char *_field19;
            unsigned long long _field20;
        } _field10;
        char *_field11;
        unsigned long long _field12;
        int _field13;
        char *_field14;
        unsigned long long _field15;
        unsigned char _field16;
        unsigned long long _field17;
        unsigned char _field18;
        int _field19;
    } _field3;
    unsigned char _field4;
    int _field5;
    unsigned char _field6;
    char *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned char _field11[32000];
    char *_field12;
    struct *_field13;
    char *_field14;
    unsigned long long _field15;
    struct iovec _field16[2];
    struct iovec *_field17;
    int _field18;
    unsigned long long _field19;
    int _field20;
    int _field21;
    int _field22;
    void *_field23;
    void *_field24;
    void *_field25;
    void *_field26;
    void *_field27;
    void *_field28;
    CDUnknownFunctionPointerType _field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownBlockType _field31;
    int _field32;
    unsigned char _field33;
    long long _field34;
    char *_field35;
    int _field36;
    unsigned long long _field37;
    unsigned int _field38;
};

struct iovec {
    void *_field1;
    unsigned long long _field2;
};
