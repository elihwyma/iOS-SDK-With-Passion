/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

typedef void (^CDUnknownBlockType)(void);

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct CVSMPTETime {
    short subframes;
    short subframeDivisor;
    unsigned int counter;
    unsigned int type;
    unsigned int flags;
    short hours;
    short minutes;
    short seconds;
    short frames;
};

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;
