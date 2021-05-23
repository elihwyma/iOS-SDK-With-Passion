/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

typedef void (^CDUnknownBlockType)(void);

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

struct QLFrameDurationInformation {
    double _field1;
    double _field2;
};

struct QLPHDisplayVelocity {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct QLPUDisplayVelocity {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct QLPXDisplayVelocity {
    double x;
    double y;
    double scale;
    double rotation;
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

struct _QLDismissGestureTrackingVelocity {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
} CDStruct_3ea018b0;
