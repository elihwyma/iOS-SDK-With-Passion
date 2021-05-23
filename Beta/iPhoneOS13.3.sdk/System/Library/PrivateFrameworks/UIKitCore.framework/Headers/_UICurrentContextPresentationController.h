/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

@interface _UICurrentContextPresentationController : UIPresentationController

- (long long)presentationStyle;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (_Bool)shouldRemovePresentersView;
- (_Bool)_mayChildGrabPresentedViewControllerView;
- (void)transitionDidFinish:(_Bool)arg1;
- (CDStruct_912cb5d2)__sizeClassPair;
- (id)_firstCurrentContextChildInWindow;

@end
