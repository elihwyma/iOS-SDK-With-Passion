/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct FlowClassificationDigest {
    unsigned long long _field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct kern_event_msg {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7[1];
};

struct mach_timespec {
    unsigned int _field1;
    int _field2;
};

struct scoreHolder {
    struct totalCounts _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sym_filter {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned int _field8;
};

struct totalCounts {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
};

struct wifiPropertyCounts {
    unsigned int classCounter[32];
    unsigned int classFlags;
    unsigned int everSetClassFlags;
    unsigned int everReportedClassFlags;
    unsigned int lastReportedClassFlags;
    unsigned int latencyPropertyCounter[8];
    unsigned int jitterPropertyCounter[8];
    unsigned int lossTolerancePropertyCounter[8];
    unsigned int durationPropertyCounter[8];
    unsigned int requiredBandwidthPropertyCounter[8];
    unsigned int preferredBandwidthPropertyCounter[8];
    unsigned long long currentCombinedFlags;
    unsigned long long lastReportedCombinedFlags;
    unsigned long long everSetCombinedFlags;
    unsigned long long everReportedCombinedFlags;
};

struct xtcpprogress_indicators {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
};

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    long long _field5;
} CDStruct_2e53e7ac;

typedef struct {
    unsigned int bandwidth;
    int bw_unit;
    float plr;
    unsigned int latency;
    unsigned int qsize;
    int qsize_unit;
    unsigned int protocol;
    unsigned int dst_port;
    unsigned int src_port;
} CDStruct_f78d6f0f;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    double _field8;
    double _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    double _field12;
    double _field13;
} CDStruct_ffbdc51d;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    char *relayName;
    _Bool symptomLike;
    _Bool scalarValues;
} CDStruct_9f5255db;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
} CDStruct_d20431f8;

typedef struct {
    CDStruct_2e53e7ac _field1;
    char _field2[24];
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
} CDStruct_dc967474;

typedef struct {
    CDStruct_2e53e7ac _field1;
    char _field2[64];
    unsigned int :8;
    unsigned char _field3;
    char _field4;
    unsigned char _field5;
    unsigned char _field6;
} CDStruct_21a8e000;

typedef struct {
    struct _NSRange _field1;
    char _field2;
    int _field3;
    int _field4;
    long long _field5;
    char _field6;
} CDStruct_7fe6219a;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int dnsServers:1;
    unsigned int networkType:1;
} CDStruct_ea982694;
