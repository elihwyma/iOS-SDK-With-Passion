/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

typedef void (^CDUnknownBlockType)(void);

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
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

struct NSData {
    Class _field1;
};

struct _LIIconVariantInfo {
    int _field1;
    struct CGSize _field2;
    double _field3;
    unsigned long long _field4;
    char *_field5;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};
