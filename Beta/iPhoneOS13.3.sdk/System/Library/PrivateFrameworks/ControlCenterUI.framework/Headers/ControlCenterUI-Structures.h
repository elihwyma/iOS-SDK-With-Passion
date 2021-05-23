/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

typedef void (^CDUnknownBlockType)(void);

struct CCUILayoutPoint {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct CCUILayoutRect {
    struct CCUILayoutPoint _field1;
    struct CCUILayoutSize _field2;
};

struct CCUILayoutSize {
    unsigned long long width;
    unsigned long long height;
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

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};
