/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIPresentationController.h>

@class NSString, UIViewController;

@interface CCUIContentModuleDetailPresentationController : UIPresentationController

{
    UIViewController *_anchoringViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (void)presentationTransitionWillBegin;
- (double)_preferredExpandedContentWidthForViewController:(id)arg1;
- (double)_preferredExpandedContentHeightForViewController:(id)arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 anchoringViewController:(id)arg3;

@end
