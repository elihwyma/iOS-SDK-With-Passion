/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
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

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};
