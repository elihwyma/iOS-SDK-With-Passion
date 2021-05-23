/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
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

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    double _field1;
    unsigned long long _field2;
} CDStruct_b5bb7d6f;

typedef struct {
    double unixTime;
    double price;
    unsigned long long volume;
} CDStruct_d4d9707c;
