/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIPortalView, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationAssistant : NSObject <Swift>

{
    id <UIViewControllerContextTransitioning> _currentContext;
    _Bool _isAppearing;
    UIViewPropertyAnimator *_presentationAnimator;
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerPresentation *_presentation;
    _UIPortalView *_presentationSourcePortalView;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    CDUnknownBlockType _dismissalCompletion;
}

@property (retain, nonatomic) _UIPreviewInteractionViewControllerPresentation *presentation;
@property (retain, nonatomic) _UIPortalView *presentationSourcePortalView;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) UIViewController *stashedParentViewController;
@property (retain, nonatomic) UIView *stashedSuperView;
@property (copy, nonatomic) CDUnknownBlockType dismissalCompletion;
@property (nonatomic) _Bool isAppearing;
@property (nonatomic, readonly) UIViewPropertyAnimator *presentationAnimator;
@property (retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_stashParentViewControllerIfNecessary;
- (void)_applyStashedParentViewControllerIfNecessary;
- (id)initWithViewControllerPresentation:(id)arg1;
- (void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(CDUnknownBlockType)arg3;
- (void)dismissViewController;
- (void)_postInteractionCleanup;
- (id)_sourcePreviewPortal;
- (void)_createpresentationAnimatorIfNecessary:(id)arg1;

@end
