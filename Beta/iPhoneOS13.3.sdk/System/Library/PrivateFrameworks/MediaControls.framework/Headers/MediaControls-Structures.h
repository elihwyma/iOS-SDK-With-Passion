/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
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

typedef struct {
    double snapshotTime;
    double startTime;
    double endTime;
    double duration;
    double elapsedDuration;
    float rate;
    float defaultRate;
    _Bool isLiveContent;
    _Bool isLoading;
} CDStruct_fce57115;
