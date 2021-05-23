/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController

{
    long long _blurStyle;
    UIVisualEffectView *_visualEffectView;
}

@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;

- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)_configureSubviews;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;
- (_Bool)_forcesPreferredAnimationControllers;
- (id)_preferredAnimationControllerForPresentation;
- (id)_preferredAnimationControllerForDismissal;

@end
