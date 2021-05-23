/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

typedef void (^CDUnknownBlockType)(void);

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

struct ProcessSerialNumber {
    unsigned int _field1;
    unsigned int _field2;
};

struct SCRCFingerState {
    unsigned long long identifier;
    long long xDirection;
    long long yDirection;
    struct SCRCMathAverageValue normalizedVelocityPerSample;
    struct SCRCMathAverageValue deltaXPerSample;
    struct SCRCMathAverageValue deltaYPerSample;
    struct SCRCMathAverageValue distancePerSample;
    double distanceTraveledWithInertiaApplied;
    _Bool dragStalled;
    long long type;
    struct CGPoint startTouchPoint;
    struct CGPoint mostRecentTouchPoint;
    struct CGPoint lastDownPoint;
    double pressure;
    double altitude;
    double azimuth;
};

struct SCRCMathAverageValue {
    unsigned int samples;
    double fifo[50];
    int fifoIndex;
    double sum;
    double average;
    double current;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

typedef struct {
    long long _field1;
    long long _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    _Bool _field10;
    struct CGPoint _field11;
    double _field12;
    double _field13;
    double _field14;
    struct CGPoint _field15;
    struct CGPoint _field16;
    struct CGPoint _field17;
    struct CGRect _field18;
    struct CGRect _field19;
    struct CGPoint _field20;
    struct CGPoint _field21;
    double _field22;
} CDStruct_fc320275;
