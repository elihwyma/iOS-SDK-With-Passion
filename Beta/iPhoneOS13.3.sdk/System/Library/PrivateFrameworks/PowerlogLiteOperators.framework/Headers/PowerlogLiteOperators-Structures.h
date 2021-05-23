/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct AggState {
    int state;
    double level;
    double timestamp;
};

struct AudioObjectPropertyAddress {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _CMCallConnectPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
};

struct _CMCallOrigPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
};

struct _NewCMCallConnectPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct _NewCMCallOrigPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct _PLBasebandEventHeader {
    struct _PLBasebandMessageHeader _field1;
    unsigned int _field2;
    unsigned char _field3[8];
    unsigned char _field4;
};

struct _PLBasebandHWOnOffComponentStats {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[2];
};

struct _PLBasebandHWStatsADSP {
    struct _PLBasebandHWOnOffComponentStats _field1;
    struct _PLBasebandHWOnOffComponentStats _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5[5];
};

struct _PLBasebandHWStatsARMPerf {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[8];
};

struct _PLBasebandHWStatsHeader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct _PLBasebandHWStatsMDSP {
    struct _PLBasebandHWOnOffComponentStats _field1;
    struct _PLBasebandHWOnOffComponentStats _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5[5];
};

struct _PLBasebandHWStatsRXRSSI {
    unsigned int _field1[4];
    unsigned int _field2[13];
    unsigned int _field3[13];
};

struct _PLBasebandHWStatsSystem {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[3];
};

struct _PLBasebandHWStatsTXPower {
    unsigned int _field1[12];
};

struct _PLBasebandHWStatsUART {
    struct _PLBasebandHWOnOffComponentStats _field1;
    struct _PLBasebandHWOnOffComponentStats _field2;
};

struct _PLBasebandLogHeader {
    struct _PLBasebandMessageHeader _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4[8];
};

struct _PLBasebandMessageHeader {
    unsigned char _field1;
};

struct _PLBasebandSystemSelectionEvent {
    unsigned short _field1;
};

struct _PLMav2BasebandHWStatsRX {
    unsigned int _field1[5][4];
    unsigned int _field2[5][13];
    unsigned int _field3[5][13];
};

struct _PLMav2BasebandHWStatsTX {
    unsigned int _field1[5][12];
};

struct _PLMav4BasebandHWOnOffComponentStats {
    unsigned int _field1[2];
};

struct _PLMav4BasebandHWSleepVeto {
    unsigned char _field1[4][13];
};

struct _PLMav4BasebandHWStatsARMPerf {
    unsigned int _field1[8];
};

struct _PLMav4BasebandHWStatsHeader {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct _PLMav4BasebandHWStatsMDSP {
    unsigned int _field1[5];
};

struct _PLMav4BasebandHWStatsQDSP {
    unsigned int _field1[5];
};

struct _PLMav4BasebandHWStatsRX {
    unsigned int _field1[5][4];
    unsigned int _field2[5][13];
    unsigned int _field3[5][13];
};

struct _PLMav4BasebandHWStatsSystem {
    unsigned int _field1[3];
};

struct _PLMav4BasebandHWStatsTX {
    unsigned int _field1[5][12];
};

struct _PLMav5BasebandHWAPPSSleepVeto {
    unsigned int _field1[1];
};

struct _PLMav5BasebandHWClocksDuration {
    unsigned int _field1[114];
    unsigned int _field2[95];
};

struct _PLMav5BasebandHWMPSSSleepVeto {
    unsigned int _field1[3];
};

struct _PLMav5BasebandHWStatsAPPSPerf {
    unsigned int _field1[6];
};

struct _PLMav5BasebandHWStatsMDSP {
    unsigned int _field1[10];
};

struct _PLMav5BasebandHWStatsProtocol {
    unsigned int _field1[5][16];
};

struct _PLMav5BasebandHWStatsQDSP {
    unsigned int _field1[10];
};

struct _PLMav5BasebandHWStatsRPM {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct _PLMav5BasebandHWStatsRX {
    unsigned int _field1[5][4];
    unsigned int _field2[5][13];
    unsigned int _field3[5][13];
};

struct _PLMav5BasebandHWStatsRXSQA {
    unsigned int _field1[5][11];
    unsigned int _field2[5][11];
};

struct _PLMav5BasebandHWStatsSleep {
    unsigned int _field1;
    unsigned int _field2;
};

struct _PLMav5BasebandHWStatsTX {
    unsigned int _field1[5][12];
};

struct _PLMav5BasebandHWStatsUSB {
    unsigned int _field1[3];
};

struct _PLMav7BasebandGPSDPOBin {
    unsigned int _field1[6];
};

struct _PLMav7BasebandHWStatsClockStateMask {
    unsigned int _field1[4];
};

struct _PLMav7BasebandHWStatsHSICState {
    unsigned int _field1[8];
};

struct _PLMav7BasebandHWStatsMCPMVeto {
    unsigned int _field1[6];
};

struct _PLMav7BasebandHWStatsNPAVeto {
    unsigned int _field1;
    unsigned int _field2[24];
};

struct _PLMav7BasebandHWStatsProtocol {
    unsigned int _field1[6][16];
    unsigned int _field2[6];
};

struct _PLMav7BasebandHWStatsRFTech {
    unsigned int _field1[6][4];
    unsigned int _field2[6][13];
    unsigned int _field3[6][13];
    unsigned int _field4[6][12];
    unsigned int _field5[6][11];
    unsigned int _field6[6][11];
};

struct _PLTimeIntervalRange {
    double _field1;
    double _field2;
};

struct coalition_resource_usage {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25[7];
    unsigned long long _field26;
    unsigned long long _field27;
};

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

struct net_port_info {
    unsigned short _field1;
    unsigned short _field2;
    struct timeval32 _field3;
    unsigned char _field4[16];
    unsigned short _field5;
    unsigned short _field6;
    union in_addr_4_6 _field7;
    union in_addr_4_6 _field8;
    int _field9;
    int _field10;
    char _field11[17];
    char _field12[17];
};

struct timeval32 {
    int _field1;
    int _field2;
};

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[4];
    unsigned int _field6[2][16];
    unsigned int _field7[12];
    unsigned int _field8[1][4];
    unsigned int _field9[6];
    unsigned int _field10[6];
} CDStruct_162c5519;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_7658c0cd;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[2][3];
    unsigned int _field4[2][4];
    unsigned int _field5[2];
    unsigned int _field6[4];
    unsigned int _field7[4];
    unsigned int _field8[12];
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned long long _field13;
} CDStruct_ca3760f5;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[2][3];
    unsigned int _field4[2][4];
    unsigned int _field5[2];
    unsigned int _field6[4];
    unsigned int _field7[4];
    unsigned int _field8[16];
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned long long _field13;
} CDStruct_3c455a1d;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[3];
} CDStruct_1addce7e;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[7];
    unsigned int _field4[3];
} CDStruct_11910088;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
} CDStruct_d008d4b8;

typedef struct {
    unsigned short _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned char _field4;
    unsigned short _field5[4][6];
    unsigned int _field6[4][6];
} CDStruct_1bdbe9b9;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5[4][6];
    unsigned int _field6[4][6];
} CDStruct_1c5e9233;

typedef struct {
    unsigned int _field1[11];
} CDStruct_2a75ea3f;

typedef struct {
    unsigned int _field1[12];
} CDStruct_713664b0;

typedef struct {
    unsigned int _field1[13];
} CDStruct_a3680ba7;

typedef struct {
    unsigned int _field1[14];
} CDStruct_28e9ceb1;

typedef struct {
    unsigned int _field1[16];
} CDStruct_d8ec598b;

typedef struct {
    unsigned int _field1[17];
} CDStruct_0808d09a;

typedef struct {
    unsigned int _field1[21];
} CDStruct_e6c877ae;

typedef struct {
    unsigned int _field1[2];
} CDStruct_52eb0d21;

typedef struct {
    unsigned int _field1[3];
} CDStruct_22c8f40a;

typedef struct {
    unsigned char _field1[4];
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned char _field6[4];
    unsigned int _field7[2][18];
    unsigned int _field8[12];
    unsigned int _field9[1][4];
    unsigned int _field10[3][8];
    unsigned int _field11[2][7];
    unsigned int _field12[2][6];
    unsigned int _field13[2][6];
    unsigned int _field14[5];
    unsigned int _field15[3];
    unsigned long long _field16[8];
} CDStruct_d45577fa;

typedef struct {
    unsigned char _field1[4];
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4[2][3];
    unsigned int _field5[2][4];
    unsigned int _field6[2];
    unsigned int _field7[4];
    unsigned int _field8[4];
    unsigned int _field9[12];
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned long long _field13;
} CDStruct_db2d74ec;

typedef struct {
    unsigned int _field1[4];
    unsigned int _field2[13];
    unsigned int _field3[13];
    unsigned int _field4[11];
    unsigned int _field5[11];
} CDStruct_10ab3012;

typedef struct {
    unsigned int _field1[4];
    unsigned int _field2[13];
    unsigned int _field3[13];
    unsigned int _field4[12];
    unsigned int _field5[11];
    unsigned int _field6[11];
} CDStruct_12fa032f;

typedef struct {
    unsigned int _field1[4];
} CDStruct_58878026;

typedef struct {
    unsigned int _field1[5];
} CDStruct_8c9fbaa1;

typedef struct {
    unsigned int _field1[6];
} CDStruct_b5f3bcd2;

typedef struct {
    unsigned int _field1[6][4];
    unsigned int _field2[6][13];
    unsigned int _field3[6][13];
    unsigned int _field4[6][12];
    unsigned int _field5[6][11];
    unsigned int _field6[6][11];
} CDStruct_549c72c8;

typedef struct {
    unsigned int _field1[7];
} CDStruct_de2d41ce;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int _field1[9];
} CDStruct_4cf7c1f9;

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

typedef struct {
    id _field1;
    struct *_field2;
    unsigned int _field3;
} CDStruct_d790cdc7;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    unsigned int _field4[17];
    unsigned int _field5[12];
    unsigned int _field6[10];
    unsigned int _field7[3];
    unsigned int _field8[6];
    unsigned int _field9[2][7];
    unsigned int _field10[2][6];
    unsigned int _field11[2][6];
    unsigned int _field12[3];
    unsigned int _field13[4];
    unsigned int _field14[4][2];
    unsigned int _field15[4][3];
    unsigned int _field16;
    unsigned int _field17[4];
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3[3];
        unsigned char _field4[3];
    } _field18;
} CDStruct_ac158e2a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    unsigned int _field4[17];
    unsigned int _field5[12];
    unsigned int _field6[6];
    unsigned int _field7[3];
    unsigned int _field8[6];
    unsigned int _field9[2][7];
    unsigned int _field10[2][6];
    unsigned int _field11[2][6];
    unsigned int _field12[3];
    unsigned int _field13;
    unsigned int _field14[3][2];
    unsigned int _field15[3][3][3];
    unsigned int _field16;
    unsigned int _field17[3];
    unsigned long long _field18[8];
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3[2];
        unsigned char _field4[2];
    } _field19;
} CDStruct_e83233e0;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    CDStruct_c0454aff _field3;
    CDStruct_c0454aff _field4;
    CDStruct_c0454aff _field5;
} CDStruct_ba477c7b;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    CDStruct_c0454aff _field3;
    CDStruct_b5f3bcd2 _field4;
} CDStruct_9b497bd6;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int duration:1;
    unsigned int subsId:1;
    unsigned int version:1;
} CDStruct_0c2ce59f;

typedef struct {
    unsigned int timestamp:1;
    unsigned int dataInactivityDurMs:1;
    unsigned int subsId:1;
} CDStruct_cbb92113;

typedef struct {
    unsigned int timestamp:1;
    unsigned int durationMs:1;
    unsigned int subsId:1;
} CDStruct_e1e72391;

typedef struct {
    unsigned int timestamp:1;
    unsigned int l1State:1;
    unsigned int subsId:1;
} CDStruct_8d6d1ea1;

typedef struct {
    unsigned int timestamp:1;
    unsigned int subsId:1;
    unsigned int isUplink:1;
} CDStruct_30075cd8;

union in_addr_4_6 {
    struct in_addr _field1;
    struct in6_addr _field2;
};
