/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIGestureRecognizer, UIPreviewInteractionController, UIView, UIViewController;

@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerCompatibilityPreviewingContext : NSObject

{
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_sourceView;
    UIView *_customViewForInteractiveHighlight;
    UIViewController *_viewController;
    UIPreviewInteractionController *_previewInteractionController;
    struct CGRect _sourceRect;
}

@property (nonatomic) struct CGRect sourceRect;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIPreviewInteractionController *previewInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic, readonly) id <UIViewControllerPreviewingDelegate> delegate;
@property (nonatomic, readonly) UIView *sourceView;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;

- (void)setDelegate:(id)arg1;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
- (_Bool)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (void)unregister;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (_Bool)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2;
- (_Bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;

@end
