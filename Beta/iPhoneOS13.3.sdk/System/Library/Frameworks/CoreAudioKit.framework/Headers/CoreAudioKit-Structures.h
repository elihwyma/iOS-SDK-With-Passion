/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
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

struct HostCallbackInfo {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};
