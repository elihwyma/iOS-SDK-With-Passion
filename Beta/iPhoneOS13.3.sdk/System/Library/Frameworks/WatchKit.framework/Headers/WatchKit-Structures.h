/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

typedef void (*CDUnknownFunctionPointerType)(void);
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

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_2b0c6e0b;
