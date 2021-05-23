/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
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

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSUUID {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

typedef struct {
    unsigned long long numberOfLines;
    double distanceFromTopToBaseline;
    double distanceFromBaselineToBottom;
    struct UIEdgeInsets edgeInsets;
} CDStruct_c3b3c0f9;
