/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
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
