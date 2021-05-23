/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIViewPropertyAnimator;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationTransition : NSObject <Swift>

{
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_presentationAnimator;
    double _interactiveTransitionFraction;
    _Bool _shouldPerformAsDismissTransition;
    _Bool _didScheduleFinishTransition;
    _Bool _didScheduleCancelTransition;
}

@property (nonatomic, readonly) double interactiveTransitionFraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (void)finishTransition;
- (_Bool)_shouldReduceMotion;
- (void)cancelTransition;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (void)_performFinishTransition;
- (void)_performCancelTransition;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (id)_newPushDecayAnimator;
- (id)_previewPresentationControllerForTransitionContext:(id)arg1;
- (void)_applyPushDecayEffectTransformToView:(id)arg1;

@end
