/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct IMBalloonDescriptor_t {
    char _field1;
    char _field2;
    char _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    char _field6;
    char _field7;
};

struct IMTextLayoutResults {
    struct CGSize _field1;
    _Bool _field2;
};

struct UIColor {
    Class _field1;
};

struct UIImage {
    Class _field1;
};
