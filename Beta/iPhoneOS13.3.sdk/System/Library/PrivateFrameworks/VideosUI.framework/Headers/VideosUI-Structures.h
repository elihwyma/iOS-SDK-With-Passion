/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
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

struct TVCornerRadii {
    double topLeft;
    double topRight;
    double bottomLeft;
    double bottomRight;
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

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    struct UIEdgeInsets _field1;
    struct UIEdgeInsets _field2;
    struct UIEdgeInsets _field3;
} CDStruct_fe9bf7bc;
