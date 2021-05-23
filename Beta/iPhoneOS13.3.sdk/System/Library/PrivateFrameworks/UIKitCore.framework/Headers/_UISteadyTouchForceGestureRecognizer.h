/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, NSDate, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer

{
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIVelocityIntegrator *_velocityIntegrator;
    double _currentTouchForce;
    NSDate *_steadyTimestamp;
    _Bool _useOverridingMinimumDuration;
    double _overrideMinimumSteadyTouchForceDuration;
    double _minimumSteadyTouchForceDuration;
}

@property (nonatomic) double minimumSteadyTouchForceDuration;

- (void)cancel;
- (void)reset;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_endContinuousEvaluation;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)recognize;
- (void)_adjustSteadyForceDurationIfNeeded:(id)arg1 event:(id)arg2;
- (void)_evaluateTouches:(id)arg1;
- (void)_evaluateWithTouchForce:(double)arg1;

@end
