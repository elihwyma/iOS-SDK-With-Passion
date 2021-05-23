/*
 Image: /System/Library/Frameworks/Social.framework/Social
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

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_2b0c6e0b;
