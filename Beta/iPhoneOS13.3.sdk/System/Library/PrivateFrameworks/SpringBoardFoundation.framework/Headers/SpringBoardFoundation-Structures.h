/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
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

struct SBFDashBoardOrientationLeadingInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct SBFDashBoardPadPageInsets {
    struct SBFDashBoardOrientationLeadingInsets _field1;
    struct SBFDashBoardOrientationLeadingInsets _field2;
    struct SBFDashBoardOrientationLeadingInsets _field3;
};

struct SBNormalizedTransitionInterval {
    double start;
    double duration;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    double _field1;
    _Bool _field2;
} CDStruct_fd1107da;

typedef struct {
    double _field1;
    double _field2;
    _Bool _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
} CDStruct_aa45ca86;

typedef struct {
    double x;
    double y;
    double z;
    double w;
} CDStruct_91d2e2b9;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    long long _field8;
} CDStruct_d8f0d129;

typedef struct {
    long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
} CDStruct_3b09cf25;

typedef struct {
    CDStruct_fd1107da _field1;
    CDStruct_fd1107da _field2;
} CDStruct_1cce69bb;
