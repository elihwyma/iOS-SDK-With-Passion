/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVGesture.h>

@class MISSING_TYPE;

@protocol ASVSingleFingerGestureDelegate, ASVTouch;

@interface ASVSingleFingerGesture : ASVGesture

{
    _Bool _panThresholdPassed;
    MISSING_TYPE *_initialTouchLocation;
    MISSING_TYPE *_latestTouchLocation;
    id <ASVSingleFingerGestureDelegate> _delegate;
    unsigned long long _enabledGestureTypes;
    id <ASVTouch> _touch;
    double _touchStartTime;
}

@property (retain, nonatomic) id <ASVTouch> touch;
@property (nonatomic) double touchStartTime;
@property (nonatomic) _Bool panThresholdPassed;
@property (nonatomic) MISSING_TYPE *initialTouchLocation;
@property (nonatomic) MISSING_TYPE *latestTouchLocation;
@property (weak, nonatomic) id <ASVSingleFingerGestureDelegate> delegate;
@property (nonatomic, readonly) unsigned long long enabledGestureTypes;

- (void)updateGesture;
- (_Bool)gestureTypeIsEnabled:(unsigned long long)arg1;
- (_Bool)generatesTaps;
- (_Bool)generatesTransforms;
- (void)finishGesture;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;

@end
