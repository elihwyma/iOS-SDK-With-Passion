/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

typedef void (^CDUnknownBlockType)(void);

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

struct _PXQuadTreeStoreNode {
    struct _PXQuadTreeStoreNode *_field1;
    struct _PXQuadTreeStoreNode *_field2;
    struct _PXQuadTreeStoreNode *_field3;
    struct _PXQuadTreeStoreNode *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    CDStruct_02837cd9 _field7;
    id _field8;
    struct *_field9;
};

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;
