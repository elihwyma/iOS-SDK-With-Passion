/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
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

struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID[20];
};

struct SUGradientPoint {
    struct CGPoint point;
    double radius;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

typedef struct {
    unsigned long long localIndex;
    unsigned long long localCount;
    unsigned long long globalIndex;
    unsigned long long globalCount;
} CDStruct_3e55db63;

typedef struct {
    long long version;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
    CDUnknownFunctionPointerType equal;
    CDUnknownFunctionPointerType hash;
} CDStruct_f2932e27;
