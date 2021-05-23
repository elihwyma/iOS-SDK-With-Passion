/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVGesture.h>

@class ASVRubberBand, MISSING_TYPE, NSSet;

@protocol ASVTouch, ASVTwoFingerGestureDelegate;

@interface ASVTwoFingerGesture : ASVGesture

{
    _Bool _panThresholdPassed;
    _Bool _rotationThresholdPassed;
    _Bool _levitationThresholdPassed;
    _Bool _scaleThresholdPassed;
    float _initialFingerAngle;
    float _lastFingerAngle;
    float _initialDistanceBetweenFingers;
    float _baseDistanceBetweenFingers;
    float _assetBaseScale;
    float _lastAssetScale;
    float _minScale;
    float _maxScale;
    float _scaleOvershoot;
    float _scaleFactor;
    id <ASVTouch> _firstTouch;
    id <ASVTouch> _secondTouch;
    MISSING_TYPE *_initialFirstTouchLocation;
    MISSING_TYPE *_initialSecondTouchLocation;
    MISSING_TYPE *_initialMidPoint;
    NSSet *_snapScalesSet;
    id <ASVTwoFingerGestureDelegate> _delegate;
    ASVRubberBand *_rubberBand;
}

@property (retain, nonatomic) ASVRubberBand *rubberBand;
@property (nonatomic) float scaleOvershoot;
@property (nonatomic) float scaleFactor;
@property (retain, nonatomic) id <ASVTouch> firstTouch;
@property (retain, nonatomic) id <ASVTouch> secondTouch;
@property (nonatomic) MISSING_TYPE *initialFirstTouchLocation;
@property (nonatomic) MISSING_TYPE *initialSecondTouchLocation;
@property (nonatomic) MISSING_TYPE *initialMidPoint;
@property (nonatomic) _Bool panThresholdPassed;
@property (nonatomic) _Bool rotationThresholdPassed;
@property (nonatomic) _Bool levitationThresholdPassed;
@property (nonatomic) float initialFingerAngle;
@property (nonatomic) float lastFingerAngle;
@property (nonatomic) _Bool scaleThresholdPassed;
@property (nonatomic) float initialDistanceBetweenFingers;
@property (nonatomic) float baseDistanceBetweenFingers;
@property (nonatomic) float assetBaseScale;
@property (nonatomic) float lastAssetScale;
@property (nonatomic) float minScale;
@property (nonatomic) float maxScale;
@property (retain, nonatomic) NSSet *snapScalesSet;
@property (weak, nonatomic) id <ASVTwoFingerGestureDelegate> delegate;

- (void)updateGesture;
- (void)finishGesture;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;
- (void)updatePanWithFirstTouchLocation:secondTouchLocation:midPoint: /* Error: Ran out of types for this method. */;
- (void)updateRubberBand;
- (void)updateRotationWithSpan: /* Error: Ran out of types for this method. */;
- (void)updateScalingWithSpan: /* Error: Ran out of types for this method. */;
- (_Bool)scaleIsWithinSnapRange:(float)arg1 snapTarget:(float)arg2;

@end
