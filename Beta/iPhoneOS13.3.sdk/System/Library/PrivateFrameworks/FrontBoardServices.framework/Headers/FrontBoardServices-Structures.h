/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
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

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    long long type;
    unsigned long long value;
    unsigned long long reserved;
} CDStruct_4e83c7bf;
