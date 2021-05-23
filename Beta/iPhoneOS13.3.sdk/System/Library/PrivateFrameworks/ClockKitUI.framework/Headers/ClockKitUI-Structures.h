/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
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

struct CLKUIAtlasBackingStructure {
    void *bytes;
    unsigned int bytesLength;
    unsigned int width;
    unsigned int height;
    unsigned int planes;
    unsigned int planeLength;
    unsigned int bytesPerPixel;
    unsigned int mipCount;
    unsigned char format;
    unsigned char filter;
    unsigned char wrap;
    _Bool mipmaps;
};

struct CLKUIQuadSize {
    int width;
    int height;
};

struct NSNumber {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;
