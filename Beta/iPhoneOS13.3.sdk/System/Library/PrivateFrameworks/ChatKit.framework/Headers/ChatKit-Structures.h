/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

typedef void (^CDUnknownBlockType)(void);

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamPacketDescription;

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
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

struct CKBalloonDescriptor_t {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    unsigned long long _field5;
    char _field6;
    long long _field7;
    long long _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
};

struct CKFeedSeparatorMetrics {
    struct CGSize _field1;
    struct UIEdgeInsets _field2;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct IMAssociatedMessageGeometryDescriptor {
    unsigned long long layoutIntent;
    unsigned long long associatedLayoutIntent;
    float parentPreviewWidth;
    float xScalar;
    float yScalar;
    float scale;
    float rotation;
};

struct IMPreviewConstraints {
    double _field1;
    struct CGSize _field2;
    double _field3;
    _Bool _field4;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSString {
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

struct _Spec {
    struct CGSize _field1;
    struct CGSize _field2;
    double _field3;
    double _field4;
    long long _field5;
};

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
    int _field7;
} CDStruct_e950349b;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long index;
    struct CGSize imageSize;
    struct CGSize minimumSize;
    _Bool hasCaption;
    _Bool isBatchStart;
} CDStruct_1417b155;
