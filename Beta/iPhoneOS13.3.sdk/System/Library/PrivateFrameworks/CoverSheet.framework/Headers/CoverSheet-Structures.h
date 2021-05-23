/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
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
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct WGWidgetListSettings {
    unsigned long long _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
};

typedef struct {
    _Bool _field1;
    _Bool _field2;
    double _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    unsigned long long _field12;
} CDStruct_2960579e;

typedef struct {
    double value;
    _Bool inclusive;
} CDStruct_e3385c33;

typedef struct {
    long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
} CDStruct_3b09cf25;

typedef struct {
    CDStruct_e3385c33 start;
    CDStruct_e3385c33 end;
} CDStruct_3e878e9e;

typedef struct {
    double value;
    CDStruct_3e878e9e interval;
    long long mode;
} CDStruct_7238a68f;
