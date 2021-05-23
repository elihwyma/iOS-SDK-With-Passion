/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

union _GLKVector2 {
    struct {
        float x;
        float y;
    } ;
    struct {
        float s;
        float t;
    } ;
    float v[2];
};
