/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

typedef void (^CDUnknownBlockType)(void);

struct AABC {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    _Bool _field16;
    int _field17;
    int _field18;
    struct __IOHIDServiceClient *_field19;
    struct __IOHIDServiceClient *_field20;
    long long _field21;
    float _field22;
    float _field23;
    CDUnknownFunctionPointerType _field24;
    void *_field25;
    int _field26;
    int _field27;
    int _field28;
    struct __CFDictionary *_field29;
    struct __CFDictionary *_field30;
    unsigned char _field31;
    _Bool _field32;
    struct WndBrightnessValues *_field33;
    int _field34;
    double _field35;
    double _field36;
    float _field37;
    float _field38;
    _Bool _field39;
    _Bool _field40;
    struct __IOHIDEvent *_field41;
    struct __IOHIDServiceClient *_field42;
    float *_field43;
    unsigned int *_field44;
    float _field45;
    float _field46;
    float _field47;
    _Bool _field48;
    _Bool _field49;
    struct __Display *_field50;
    float _field51;
    struct __CFDictionary *_field52;
    struct __CFDictionary *_field53;
    _Bool _field54;
    _Bool _field55;
    _Bool _field56;
    _Bool _field57;
    _Bool _field58;
    int _field59;
    struct ALS *_field60;
    struct ALS *_field61;
    struct __IOHIDServiceClient *_field62;
    struct __IOHIDServiceClient *_field63;
    int _field64;
    float _field65;
    float _field66;
    float _field67;
    int _field68;
    int _field69;
    int _field70;
    int _field71;
    int _field72;
    float _field73;
    float _field74;
    float _field75;
    float _field76;
    float _field77;
    float _field78;
    float _field79;
    unsigned int _field80;
    unsigned int _field81;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } _field82;
    int _field83;
    id _field84;
    unsigned int _field85;
    float _field86;
    float _field87;
    float _field88;
    float _field89;
    float _field90;
    float _field91;
    _Bool _field92;
    struct _ALS_Struct _field93;
    float _field94;
    int _field95;
    double _field96;
    double _field97;
    float _field98;
    int _field99;
    unsigned int _field100;
    _Bool _field101;
    float _field102;
    float _field103;
    float _field104;
    float _field105;
    _Bool _field106;
    float _field107;
    float _field108;
    float _field109;
    float _field110;
    float _field111;
    float _field112;
    float _field113;
    float _field114;
    struct Curve _field115[3];
    struct Curve _field116;
    struct {
        _Bool _field1;
        CDStruct_6e3f967a _field2;
        CDStruct_6e3f967a _field3;
        CDStruct_6e3f967a _field4;
    } _field117;
    struct CurveCap _field118;
    struct CustomCurve _field119;
    struct CustomCurve _field120;
    struct CustomCurve _field121[3];
    struct CustomCurve _field122;
    struct CustomCurve _field123;
    int _field124;
    _Bool _field125;
    float _field126;
    unsigned int _field127;
    struct Curve _field128;
    double _field129;
    _Bool _field130;
    struct {
        unsigned int _field1;
        double _field2[3];
        int _field3;
    } _field131;
    struct {
        _Bool _field1;
        int _field2;
        double _field3;
        double _field4;
        double _field5;
    } _field132;
    _Bool _field133;
    _Bool _field134;
    unsigned int _field135;
    float _field136;
    float _field137;
    _Bool _field138;
    struct _SETTINGS _field139;
    int _field140;
    _Bool _field141;
    struct {
        CDStruct_6e3f967a _field1;
        CDStruct_0eb04004 _field2;
        CDStruct_0eb04004 _field3;
    } _field142;
    struct {
        int _field1;
        double _field2[12];
        double _field3[9];
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned int _field6;
        id _field7;
    } _field143;
    _Bool _field144;
    _Bool _field145;
    float _field146;
    float _field147;
    int _field148;
    unsigned int _field149;
    unsigned int _field150;
    unsigned int _field151;
    int _field152;
    int _field153;
    float *_field154;
    int _field155;
    float _field156;
    float _field157;
    float _field158;
    float _field159;
    float _field160;
    float _field161;
    struct TimeConstantTableEntry *_field162;
    int _field163;
    float _field164;
    int _field165;
    unsigned long long _field166;
    int _field167;
    id _field168;
    unsigned int _field169;
    struct {
        float _field1[10];
        float _field2[15];
        float _field3[10];
        float _field4[10];
        float _field5[10];
        float _field6[10];
    } _field170;
    struct {
        float _field1;
        _Bool _field2;
        float _field3;
        _Bool _field4;
    } _field171;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
    } _field172;
    id _field173;
    id _field174;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
    } _field175;
    _Bool _field176;
};

struct ALS;

struct BLRAggdInfo {
    float manualModeTime;
    float sunModeTime;
    float scheduleModeTime;
    int turnOnForNowCount;
    int turnOffForNowCount;
    int turnOnUntilTomorrowCount;
    int turnOffUntilTomorrowCount;
    double _aggdModeChangeTimestamp;
};

struct ColorEffects;

struct Curve {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CurvePrefs _field9;
};

struct CurveCap {
    float _field1[4];
    float _field2[4];
    double _field3;
};

struct CurvePrefs {
    float _field1[3];
    float _field2[3];
    float _field3;
    float _field4;
    unsigned int _field5;
    unsigned int _field6[3];
    _Bool _field7;
    float _field8;
};

struct CustomCurve {
    float _field1[20];
    float _field2[20];
    int _field3;
};

struct NMFactorState {
    double rampStartTime;
    float factor;
    float target;
    float start;
    float rampLength;
};

struct TimeConstantTableEntry;

struct WndBrightnessValues;

struct _ALS_Struct {
    float _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
};

struct _INTERNAL_SETTINGS {
    int _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct _SETTINGS {
    int _field1;
    int _field2;
    struct _INTERNAL_SETTINGS _field3;
};

struct __CFDictionary;

struct __IOHIDServiceClient;

typedef struct {
    unsigned int status;
    unsigned char nChannels;
    unsigned char orientation;
    unsigned short reserved;
    unsigned int integrationTime;
    unsigned int reportInterval;
    int gain;
    float lux;
    float channelData[6];
    float CCT;
    short AZOffsets[6];
    float temperature;
} CDStruct_805d9ecb;

typedef struct {
    double _field1[17];
    int _field2[17];
    int _field3;
    unsigned long long _field4;
} CDStruct_c688133d;

typedef struct {
    double X;
    double Y;
    double Z;
} CDStruct_6f955ef8;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct {
    float minCCT;
    float maxCCT;
    float midCCT;
} CDStruct_6ede4ed5;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    int hour;
    int minute;
} CDStruct_bdf7039f;

typedef struct {
    float XYZ[3];
    CDStruct_6e3f967a xy;
    float CCT1;
    struct {
        int orientation;
        float rawChannels[6];
        int nChannels;
        float brightness;
    } extra;
} CDStruct_6cdf1869;

typedef struct {
    float _field1;
    float _field2[9];
    unsigned int _field3;
    float _field4;
    CDStruct_6e3f967a _field5;
    int _field6;
    double _field7;
} CDStruct_c693ffc9;

typedef struct {
    CDStruct_c688133d _field1;
    CDStruct_c688133d _field2;
    struct {
        double _field1[46];
        int _field2;
        unsigned long long _field3;
    } _field3;
    struct {
        double _field1;
        double _field2;
        double _field3;
        _Bool _field4;
        float _field5;
    } _field4;
    struct {
        double _field1[10];
        int _field2;
        double _field3;
    } _field5;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
        float _field5;
        float _field6;
    } _field6;
    int _field7;
} CDStruct_97eeab40;

typedef struct {
    CDStruct_bdf7039f fromTime;
    CDStruct_bdf7039f toTime;
} CDStruct_6cee55f3;

typedef struct {
    _Bool active;
    _Bool enabled;
    _Bool sunSchedulePermitted;
    int mode;
    CDStruct_6cee55f3 schedule;
    unsigned long long disableFlags;
    _Bool available;
} CDStruct_fcaf372b;

typedef struct {
    float _field1;
    _Bool _field2;
    _Bool _field3;
    union _restriction {
        struct {
            float _field1;
            float _field2;
            float _field3;
            float _field4;
            float _field5;
        } _field1;
        struct {
            float _field1;
            float _field2;
            struct {
                float _field1[6];
                float _field2[6];
            } _field3[2];
        } _field2;
    } _field4;
} CDStruct_0eb04004;
