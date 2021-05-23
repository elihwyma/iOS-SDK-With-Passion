/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
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

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;
