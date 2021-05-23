/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
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

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

typedef struct {
    _Bool enabled;
    _Bool minimized;
    _Bool hasBeenShown;
    struct CGRect keyboardFrame;
    double keyboardHeight;
} CDStruct_a82615c4;
