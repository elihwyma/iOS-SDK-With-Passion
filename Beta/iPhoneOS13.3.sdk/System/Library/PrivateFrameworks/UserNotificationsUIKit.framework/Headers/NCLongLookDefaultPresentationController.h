/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <PlatterKit/PLExpandedPlatterPresentationController.h>

@class MTMaterialView, UIViewController;

@protocol NCLongLookDefaultPresentationControllerDelegate;

@interface NCLongLookDefaultPresentationController : PLExpandedPlatterPresentationController

{
    UIViewController *_sourceViewController;
    MTMaterialView *_backgroundMaterialView;
    _Bool _presenting;
}

@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (weak, nonatomic) id <NCLongLookDefaultPresentationControllerDelegate> presentationControllerDelegate;

- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (_Bool)shouldRemovePresentersView;
- (_Bool)_shouldPresentInCurrentContext;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;

@end
