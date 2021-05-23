/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, NSMutableSet, _UIVelocityIntegrator;

@interface UITouchForceGestureRecognizer : UIGestureRecognizer

{
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSMutableSet *_currentTouches;
    unsigned long long _eventTouchCount;
    double _currentTouchForce;
    struct CGPoint _initialCentroidOfTouches;
    struct CGPoint _currentCentroidOfTouches;
    _UIVelocityIntegrator *_velocityIntegrator;
    _Bool _automaticallyIncreaseTouchForce;
    double _touchesBeganTimestamp;
    _Bool _steady;
    double _touchForce;
    double _minimumRequiredTouchForce;
    double _velocity;
    double _allowableMovement;
    unsigned long long _maximumNumberOfTouches;
    double _automaticTouchForce;
    double _automaticTouchForceDuration;
    CDUnknownBlockType _configurationBlock;
}

@property (nonatomic) double touchForce;
@property (nonatomic) double velocity;
@property (nonatomic, getter=isSteady) _Bool steady;
@property (nonatomic) double minimumRequiredTouchForce;
@property (nonatomic) double allowableMovement;
@property (nonatomic, readonly) _Bool hasExceededAllowableMovement;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) double automaticTouchForce;
@property (nonatomic) double automaticTouchForceDuration;
@property (nonatomic, readonly) double touchDuration;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock;

- (void)reset;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (_Bool)_hasExceededAllowableMovement;
- (void)_endContinuousEvaluation;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (void)_evaluateTouches:(id)arg1 withEvent:(id)arg2;
- (void)_endIfNeeded:(_Bool)arg1;
- (_Bool)_validateHysteresis;
- (double)_evaluateAutomaticTouchForceForTimeInterval:(double)arg1 actualTouchForce:(double)arg2;
- (void)_evaluateWithTouchForce:(double)arg1 centroidAtLocation:(struct CGPoint)arg2;
- (void)_updateTouchForce:(double)arg1;
- (_Bool)_hasExceededMaximumNumberOfTouches;
- (void)_updateForContinuousEvaluation:(id)arg1;

@end
