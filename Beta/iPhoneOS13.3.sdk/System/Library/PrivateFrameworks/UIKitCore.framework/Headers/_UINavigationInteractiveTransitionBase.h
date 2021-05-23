/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>

#import <UIKitCore/Swift-Protocol.h>

@class CADisplayLink, NSString, UIGestureRecognizer, UIPanGestureRecognizer, UIView, UIViewController, _UINavigationParallaxTransition;

@protocol _UINavigationInteractiveTransitionBaseDelegate;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <Swift>

{
    UIView *_gestureRecognizerView;
    UIPanGestureRecognizer *_gestureRecognizer;
    long long __interactionState;
    _Bool __transitionWasStopped;
    _Bool __stoppedTransitionWasCancelled;
    UIViewController *__parent;
    _Bool __useAugmentedShouldPopDecisionProcedure;
    _Bool __completesTransitionOnEnd;
    CADisplayLink *_displayLink;
    double _timestamps[3];
    double _velocities[3];
    double _accelerations[3];
    _Bool _shouldReverseTranslation;
    _Bool __shouldReverseLayoutDirection;
    _Bool _springAnimationIsPending;
    _Bool _inSpringAnimation;
    _UINavigationParallaxTransition *_animationController;
    id <_UINavigationInteractiveTransitionBaseDelegate> _delegate;
    unsigned long long _sampleCount;
    double _totalDistance;
    double _skipTimeStamp;
    double _previousTimeStamp;
    double _previousDisplacement;
    double _previousVelocity;
    double _previousAcceleration;
    double _averageVelocity;
    double _averageAcceleration;
}

@property (nonatomic) _Bool springAnimationIsPending;
@property (nonatomic) _Bool inSpringAnimation;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) double totalDistance;
@property (nonatomic) double skipTimeStamp;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double averageVelocity;
@property (nonatomic) double averageAcceleration;
@property (weak, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic) _Bool shouldReverseTranslation;
@property (retain, nonatomic) _UINavigationParallaxTransition *animationController;
@property (nonatomic, setter=_setInteractionState:) long long _interactionState;
@property (nonatomic, setter=_setTransitionWasStopped:) _Bool _transitionWasStopped;
@property (nonatomic, setter=_setStoppedTransitionWasCancelled:) _Bool _stoppedTransitionWasCancelled;
@property (weak, nonatomic, setter=_setParent:) UIViewController *_parent;
@property (nonatomic, setter=_setUseAugmentedShouldPopDecisionProcedure:) _Bool _useAugmentedShouldPopDecisionProcedure;
@property (nonatomic, setter=_setCompletesTransitionOnEnd:) _Bool _completesTransitionOnEnd;
@property (nonatomic, readonly, getter=_navigationGesture) UIGestureRecognizer *navigationGesture;
@property (weak, nonatomic) id <_UINavigationInteractiveTransitionBaseDelegate> delegate;
@property (nonatomic, setter=_setShouldReverseLayoutDirection:) _Bool _shouldReverseLayoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)startInteractiveTransition;
- (void)_resetInteractionController;
- (void)_stopInteractiveTransition;
- (void)handleNavigationTransition:(id)arg1;
- (double)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(_Bool)arg2 finalSample:(_Bool)arg3;
- (_Bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double *)arg3;
- (void)setNotInteractiveTransition;
- (id)gestureRecognizerView;
- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;
- (void)_completeStoppedInteractiveTransition;

@end
