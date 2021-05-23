/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
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
    _Bool showScanningState;
    _Bool showScanningStateDuringFaceDetect;
    double minimumDurationBeforeShowScanningState;
    _Bool bkCoachingHintsEnabled;
    double minimumDurationBetweenLeavingCoachingAndCoaching;
    double minimumDurationShowingCoaching;
    double durationOnCameraCoveredGlyphBeforeCoaching;
    double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
    _Bool coachingDelaysUnlock;
    _Bool suppressFaceIDDisabledState;
    _Bool spinBeforeCoaching;
    unsigned long long substate;
} CDStruct_29b32c11;

typedef struct {
    long long fromState;
    long long toState;
    double progress;
} CDStruct_930a33b1;
