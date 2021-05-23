/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVDisplayLink, AVInteractiveTransitionGestureTracker, AVPresentationContext, AVPresentationController, AVTransition, CAMediaTimingFunction, NSString, UIView;

@protocol AVTransitionControllerDelegate, AVTransitionDriver;

__attribute__((visibility("hidden")))
@interface AVTransitionController : NSObject

{
    id <AVTransitionControllerDelegate> _delegate;
    id <AVTransitionDriver> _interactiveGestureTracker;
    UIView *_interactionView;
    long long _state;
    AVDisplayLink *_displayLink;
    AVTransition *_activeTransition;
    AVInteractiveTransitionGestureTracker *_gestureTracker;
    UIView *_sourceView;
    AVPresentationController *_presentationController;
    CDUnknownBlockType _transitionDidBeginHandler;
    CAMediaTimingFunction *_easeInFunction;
    CAMediaTimingFunction *_easeOutFunction;
    struct CGPoint _touchGravity;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) AVDisplayLink *displayLink;
@property (retain, nonatomic) AVTransition *activeTransition;
@property (nonatomic, readonly) AVInteractiveTransitionGestureTracker *gestureTracker;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) AVPresentationController *presentationController;
@property (copy, nonatomic) CDUnknownBlockType transitionDidBeginHandler;
@property (retain, nonatomic) CAMediaTimingFunction *easeInFunction;
@property (retain, nonatomic) CAMediaTimingFunction *easeOutFunction;
@property (nonatomic) struct CGPoint touchGravity;
@property (weak, nonatomic, readonly) AVPresentationContext *presentationContext;
@property (weak, nonatomic) id <AVTransitionControllerDelegate> delegate;
@property (retain, nonatomic) id <AVTransitionDriver> interactiveGestureTracker;
@property (weak, nonatomic) UIView *interactionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)transitionWillComplete:(id)arg1 success:(_Bool)arg2;
- (id)transitionPresentedViewBackgroundColor:(id)arg1;
- (id)transitionBackgroundViewBackgroundColor:(id)arg1;
- (_Bool)transitionDriver:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (_Bool)transitionDriver:(id)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2;
- (void)transitionDriver:(id)arg1 didBeginTrackingTransitionInteraction:(long long)arg2 readyToProceedHandler:(CDUnknownBlockType)arg3;
- (void)transitionDriverDidContinueInteraction:(id)arg1;
- (void)transitionDriverDidCancelInteraction:(id)arg1;
- (void)transitionDriverDidFinishInteraction:(id)arg1;
- (void)addTransitionDriver:(id)arg1 toView:(id)arg2;
- (void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginFullScreenDismissalOfViewController:(id)arg1 animated:(_Bool)arg2 isInteractive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cancelTransition;
- (void)_finishTransition;
- (void)_fireDidBeginHandlerIfNeeded;
- (void)_startObservingAnimatorProgress;

@end
