/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

typedef void (^CDUnknownBlockType)(void);

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct PXSimpleIndexPath {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct PXTileGeometry {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGSize _field3;
    struct CGAffineTransform _field4;
    double _field5;
    double _field6;
    _Bool _field7;
    struct CGSize _field8;
    struct CGRect _field9;
    void *_field10;
};

struct PXTileIdentifier {
    unsigned long long _field1;
    unsigned long long _field2[10];
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};
