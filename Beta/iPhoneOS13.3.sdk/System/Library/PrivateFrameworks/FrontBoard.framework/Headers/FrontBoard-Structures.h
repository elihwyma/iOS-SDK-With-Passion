/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
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

struct NSMutableDictionary {
    Class _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;
