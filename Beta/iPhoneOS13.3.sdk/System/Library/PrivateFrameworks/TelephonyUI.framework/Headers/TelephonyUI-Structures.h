/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
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
    struct CGRect rect;
    double cornerRadius;
} CDStruct_bad6cd8d;

typedef struct {
    struct CGSize size;
    CDStruct_bad6cd8d outerPath;
    CDStruct_bad6cd8d innerPath;
    _Bool isCircle;
    _Bool drawsOutsideOuterPath;
} CDStruct_f15746dd;
