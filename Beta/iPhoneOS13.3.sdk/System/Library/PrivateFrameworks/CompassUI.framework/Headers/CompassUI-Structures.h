/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

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

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
} CDStruct_cfd1ab65;

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};
