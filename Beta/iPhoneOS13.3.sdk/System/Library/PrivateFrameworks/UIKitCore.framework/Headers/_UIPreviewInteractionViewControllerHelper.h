/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIView, UIViewController, UIWindow, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionViewControllerHelper : NSObject <Swift>

{
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerPresentation *_viewControllerPresentation;
    UIWindow *_presentingWindow;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
    _Bool _shouldActAsAppearanceAnimationController;
    _Bool _shouldUseDefaultPresentationController;
    UIViewController *_previousParentViewController;
    UIView *_previousSuperview;
    id <UIViewControllerContextTransitioning> _currentTransitionContext;
}

@property (nonatomic, readonly) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithViewControllerPresentation:(id)arg1;
- (void)dismissViewController;
- (void)_performPresentViewControllerFromViewController:(id)arg1;
- (void)_finalizeAfterViewControllerPresentation;
- (void)_performDismissalCompletionIfNeeded;
- (id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2;
- (void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissalCompletion:(CDUnknownBlockType)arg4;

@end
