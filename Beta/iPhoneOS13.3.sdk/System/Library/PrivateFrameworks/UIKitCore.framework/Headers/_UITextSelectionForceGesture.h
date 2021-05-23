/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer

{
    _Bool _shouldFailWithoutForce;
    _Bool _didLongPress;
    _Bool _touchEclipsesVelocity;
    UIKBPanGestureVelocitySample *_velocitySample;
    UIKBPanGestureVelocitySample *_previousVelocitySample;
    UIKBPanGestureVelocitySample *_liftOffSample;
    double _increasingForceTimestamp;
    double _lastTouchTime;
    long long _liftOffState;
    long long _increasingForceState;
    struct CGPoint _lastSceneReferenceLocation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    struct CGRect _velocityRange;
}

@property (nonatomic) _Bool didLongPress;
@property (readonly, getter=_velocitySample) UIKBPanGestureVelocitySample *_velocitySample;
@property (readonly, getter=_previousVelocitySample) UIKBPanGestureVelocitySample *_previousVelocitySample;
@property (readonly, getter=_liftOffSample) UIKBPanGestureVelocitySample *_liftOffSample;
@property (nonatomic) double increasingForceTimestamp;
@property (nonatomic) double lastTouchTime;
@property (nonatomic) struct CGPoint lastSceneReferenceLocation;
@property (nonatomic) struct CGPoint lastUnadjustedSceneReferenceLocation;
@property (nonatomic) long long liftOffState;
@property (nonatomic) long long increasingForceState;
@property (nonatomic) struct CGRect velocityRange;
@property (nonatomic) _Bool touchEclipsesVelocity;
@property (nonatomic) _Bool shouldFailWithoutForce;

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (_Bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)_resetVelocitySamples;
- (void)enoughTimeElapsed:(id)arg1;
- (struct CGPoint)_locationOfTouches:(id)arg1;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3;
- (struct CGPoint)_centroidInView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (_Bool)forceHasIncreasedForTimeInterval:(double)arg1;
- (_Bool)shouldResetRangeForVelocity:(struct CGPoint)arg1 previousVelocity:(struct CGPoint)arg2;
- (void)_updateLiftOffState;

@end
