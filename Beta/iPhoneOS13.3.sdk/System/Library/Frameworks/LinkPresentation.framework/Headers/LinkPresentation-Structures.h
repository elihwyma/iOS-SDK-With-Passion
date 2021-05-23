/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

typedef struct {
    struct {
        unsigned short _field1;
        unsigned short _field2;
    } _field1[32];
    unsigned long long _field2;
} CDStruct_f2b84ca7;
