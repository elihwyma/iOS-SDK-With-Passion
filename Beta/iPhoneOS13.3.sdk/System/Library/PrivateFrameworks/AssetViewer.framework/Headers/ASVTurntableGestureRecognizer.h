/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVUnifiedGestureRecognizer.h>

@class ASVDeceleration, ASVRubberBand, ASVVelocitySample2D, MISSING_TYPE, NSString;

@protocol ASVTurntableGestureRecognizerDelegate;

@interface ASVTurntableGestureRecognizer : ASVUnifiedGestureRecognizer

{
    _Bool _panThresholdPassed;
    _Bool _yawThresholdPassed;
    _Bool _pitchThresholdPassed;
    float _initialAssetPitch;
    float _lastOverallDeltaX;
    float _lastRubberBandedPitch;
    id <ASVTurntableGestureRecognizerDelegate> _turntableDelegate;
    MISSING_TYPE *_initialPanLocation;
    MISSING_TYPE *_lastPanLocation;
    double _lastPanTime;
    ASVRubberBand *_rubberBand;
    MISSING_TYPE *_yawThresholdLocation;
    MISSING_TYPE *_pitchThresholdLocation;
    ASVVelocitySample2D *_velocitySample;
    ASVVelocitySample2D *_previousVelocitySample;
    ASVDeceleration *_yawDeceleration;
    ASVDeceleration *_pitchDeceleration;
}

@property (nonatomic) MISSING_TYPE *initialPanLocation;
@property (nonatomic) MISSING_TYPE *lastPanLocation;
@property (nonatomic) double lastPanTime;
@property (nonatomic) float initialAssetPitch;
@property (nonatomic) float lastOverallDeltaX;
@property (nonatomic) float lastRubberBandedPitch;
@property (retain, nonatomic) ASVRubberBand *rubberBand;
@property (nonatomic) _Bool panThresholdPassed;
@property (nonatomic) _Bool yawThresholdPassed;
@property (nonatomic) MISSING_TYPE *yawThresholdLocation;
@property (nonatomic) _Bool pitchThresholdPassed;
@property (nonatomic) MISSING_TYPE *pitchThresholdLocation;
@property (retain, nonatomic) ASVVelocitySample2D *velocitySample;
@property (retain, nonatomic) ASVVelocitySample2D *previousVelocitySample;
@property (retain, nonatomic) ASVDeceleration *yawDeceleration;
@property (retain, nonatomic) ASVDeceleration *pitchDeceleration;
@property (nonatomic, readonly) float decelerationYawDelta;
@property (nonatomic, readonly) float decelerationPitchDelta;
@property (weak, nonatomic) id <ASVTurntableGestureRecognizerDelegate> turntableDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) float minimumObjectScale;
@property (nonatomic, readonly) float maximumObjectScale;

- (_Bool)isDecelerating;
- (void)setEnabledGestureTypes:(unsigned long long)arg1;
- (void)cancelDeceleration;
- (id)singleFingerGestureForTouch:(id)arg1 dataSource:(id)arg2 enabledGestureTypes:(unsigned long long)arg3;
- (id)twoFingerGestureForFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3;
- (float)clampedScaleForScale:(float)arg1;
- (void)gesture:(id)arg1 beganPanningAtScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gesture:(id)arg1 pannedToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gestureEndedPanning:(id)arg1;
- (void)pitchRangeWithMinPitch:(float *)arg1 maxPitch:(float *)arg2;
- (void)startSpinningYawWithInitialVelocity:(float)arg1;
- (void)startSnappingPitch;
- (void)startSpinningPitchWithInitialVelocity:(float)arg1;
- (id)initWithTurntableDelegate:(id)arg1 feedbackGenerator:(id)arg2;

@end
