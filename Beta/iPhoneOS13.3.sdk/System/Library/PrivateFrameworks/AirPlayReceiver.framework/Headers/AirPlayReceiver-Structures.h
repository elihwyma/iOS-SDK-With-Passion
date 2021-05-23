/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct APPairingServicesPrivate;

struct APReceiverAudioSessionPrivate;

struct APReceiverSessionManagerOpaque;

struct AirPlayReceiverServerPrivate {
    struct __CFRuntimeBase _field1;
    void *_field2;
    id _field3;
    int _field4;
    int _field5;
    struct OpaqueAPAdvertiser *_field6;
    unsigned char _field7;
    unsigned char _field8;
    struct HTTPServerPrivate *_field9;
    id _field10;
    struct HTTPServerPrivate *_field11;
    unsigned char _field12[16];
    float _field13;
    unsigned char _field14;
    int _field15;
    unsigned char _field16;
    unsigned char _field17;
    id _field18;
    unsigned int _field19;
    unsigned long long _field20;
    struct OpaqueAPReceiverSystemInfo *_field21;
    unsigned char _field22;
    unsigned char _field23;
    struct __CFDictionary *_field24;
    struct __CFDictionary *_field25;
    struct __CFDictionary *_field26;
    unsigned int _field27;
    int _field28;
    unsigned int _field29;
    struct APReceiverSessionManagerOpaque *_field30;
    struct OpaqueFigValeria *_field31;
    CDUnknownFunctionPointerType _field32;
    struct __CFString *_field33;
    struct __CFString *_field34;
    unsigned char _field35;
    unsigned char _field36;
    unsigned char _field37;
    unsigned char _field38;
    unsigned char _field39;
    unsigned char _field40;
    unsigned char _field41;
};

struct AirPlayReceiverSessionPrivate {
    struct __CFRuntimeBase _field1;
    id _field2;
    struct AirPlayReceiverServerPrivate *_field3;
    struct OpaqueAPReceiverRequestProcessor *_field4;
    struct APReceiverSessionManagerOpaque *_field5;
    void *_field6;
    struct {
        void *_field1;
        void *_field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
    } _field7;
    char _field8[32];
    char _field9[17];
    struct OpaqueAPReceiverStatsCollector *_field10;
    id _field11;
    unsigned int _field12;
    CDUnion_4a4a8072 _field13;
    CDUnion_4a4a8072 _field14;
    unsigned char _field15[16];
    int _field16;
    unsigned long long _field17;
    unsigned char _field18[6];
    unsigned char _field19;
    unsigned char _field20;
    struct __CFString *_field21;
    struct __CFString *_field22;
    struct __CFString *_field23;
    struct __CFString *_field24;
    unsigned long long _field25;
    unsigned int _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    struct {
        struct _CCCryptor *_field1;
        unsigned char _field2[16];
    } _field29;
    struct *_field30;
    unsigned char _field31[16];
    unsigned char _field32[16];
    unsigned char _field33;
    unsigned char _field34;
    unsigned char _field35;
    struct OpaqueAPSNetworkClock *_field36;
    unsigned char _field37;
    unsigned char _field38;
    unsigned char _field39;
    struct HTTPClientPrivate *_field40;
    unsigned int _field41;
    int _field42;
    int _field43;
    int _field44;
    struct APPairingServicesPrivate *_field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned long long _field48;
    unsigned long long _field49;
    unsigned long long _field50;
    unsigned int _field51;
    unsigned long long _field52;
    int _field53;
    struct __CFDictionary *_field54;
    struct APReceiverAudioSessionPrivate *_field55;
    unsigned int _field56;
    struct OpaqueFigValeria *_field57;
    struct OpaqueAPReceiverUIController *_field58;
    unsigned int _field59;
    struct OpaqueAPReceiverScreenSession *_field60;
    double _field61;
    unsigned char _field62;
    unsigned char _field63;
    unsigned int _field64;
    struct __CFString *_field65;
    unsigned char _field66;
    unsigned char _field67;
    unsigned char _field68;
    unsigned char _field69;
    unsigned long long _field70;
    struct __CFDictionary *_field71;
    int _field72;
    int _field73;
    struct __CFArray *_field74;
    unsigned char _field75;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGSize {
    double width;
    double height;
};

struct HTTPClientPrivate;

struct HTTPServerPrivate;

struct OpaqueAPAdvertiser;

struct OpaqueAPAdvertiserBTLEManager {
    struct __CFRuntimeBase _field1;
    id _field2;
};

struct OpaqueAPReceiverRequestProcessor;

struct OpaqueAPReceiverScreenSession;

struct OpaqueAPReceiverStatsCollector;

struct OpaqueAPReceiverSystemInfo;

struct OpaqueAPReceiverUIController;

struct OpaqueAPSNetworkClock;

struct OpaqueFigValeria;

struct _CCCryptor;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned long long _field1;
    _Atomic unsigned long long _field2;
};

struct __CFString;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

typedef struct {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned char _field7;
    int _field8;
} CDStruct_77a0ff72;

typedef union {
    struct sockaddr _field1;
    struct sockaddr_in _field2;
    struct sockaddr_in6 _field3;
} CDUnion_4a4a8072;
