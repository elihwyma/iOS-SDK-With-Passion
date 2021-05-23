/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
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

struct NSDictionary {
    Class _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};
