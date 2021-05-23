/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, NSValue, UITargetedPreview, UIView, UIViewController, _UIClickPresentation;

__attribute__((visibility("hidden")))
@interface _UIRapidClickPresentationAssistant : NSObject <Swift>

{
    int _animationCount;
    _Bool _isInteractionInitiatedDismiss;
    CDUnknownBlockType lifecycleCompletion;
    _UIClickPresentation *presentation;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    NSValue *_preservedInputViewId;
}

@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) UIViewController *stashedParentViewController;
@property (retain, nonatomic) UIView *stashedSuperView;
@property (retain, nonatomic) NSValue *preservedInputViewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UIClickPresentation *presentation;
@property (copy, nonatomic) CDUnknownBlockType lifecycleCompletion;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_stashParentViewControllerIfNecessary;
- (void)_performPresentationAnimationsFromViewController:(id)arg1;
- (void)_animateUsingFluidSpringWithType:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_animateDismissalWithReason:(unsigned long long)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_nonAnimatedDismissalWithReason:(unsigned long long)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_restoreInputViewWithReason:(unsigned long long)arg1 forPresentation:(id)arg2;
- (id)initWithClickPresentation:(id)arg1;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(CDUnknownBlockType)arg2;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
