/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@class MISSING_TYPE;

typedef void (^CDUnknownBlockType)(void);

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

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

struct NSDictionary {
    Class _field1;
};

struct PVTransformAnimationInfo {
    CDStruct_1b6d18a9 time;
    struct CGPoint translation;
    double scale;
    double rotation;
};

struct SCNMatrix4 {
    float _field1;
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
    float _field16;
};

struct SCNVector3 {
    float _field1;
    float _field2;
    float _field3;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    double x;
    double y;
    double z;
    double w;
} CDStruct_91d2e2b9;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int width;
    int height;
} CDStruct_79c71658;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    struct _field1[4];
} CDStruct_c8b391b0;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
    CDStruct_1b6d18a9 _field3;
} CDStruct_d2aef016;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;
