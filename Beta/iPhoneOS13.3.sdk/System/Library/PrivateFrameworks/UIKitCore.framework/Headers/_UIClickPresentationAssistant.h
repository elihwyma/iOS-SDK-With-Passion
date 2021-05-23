/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIClickPresentation, _UIPortalView, _UIStateMachine;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationAssistant : NSObject <Swift>

{
    id <UIViewControllerContextTransitioning> _currentContext;
    UIViewPropertyAnimator *_presentationAnimator;
    CDUnknownBlockType lifecycleCompletion;
    _UIClickPresentation *presentation;
    _UIPortalView *_presentationSourcePortalView;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    CDUnknownBlockType _transitionCompletion;
    _UIStateMachine *_stateMachine;
}

@property (retain, nonatomic) _UIPortalView *presentationSourcePortalView;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) UIViewController *stashedParentViewController;
@property (retain, nonatomic) UIView *stashedSuperView;
@property (copy, nonatomic) CDUnknownBlockType transitionCompletion;
@property (nonatomic, readonly) UIViewPropertyAnimator *presentationAnimator;
@property (retain, nonatomic) _UIStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UIClickPresentation *presentation;
@property (copy, nonatomic) CDUnknownBlockType lifecycleCompletion;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_stashParentViewControllerIfNecessary;
- (void)_applyStashedParentViewControllerIfNecessary;
- (id)initWithClickPresentation:(id)arg1;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(CDUnknownBlockType)arg2;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareStateMachine;
- (void)_animatePresentation;
- (void)_didTransitionToPresenting;
- (void)_didTransitionToDismissingFromState:(unsigned long long)arg1;
- (void)_didTransitionToPresented;
- (void)_didTransitionToPossibleEndingTransition:(id)arg1;
- (void)_animateDismissalIsInterruption:(_Bool)arg1;
- (void)_postInteractionCleanup;
- (void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(_Bool)arg2;
- (id)_sourcePreviewPortal;

@end
