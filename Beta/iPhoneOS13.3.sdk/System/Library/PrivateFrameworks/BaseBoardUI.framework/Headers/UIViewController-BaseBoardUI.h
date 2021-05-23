/*
 Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (BaseBoardUI)

- (_Bool)bs_isDisappearingOrDisappeared;
- (_Bool)bs_isAppearingOrAppeared;
- (_Bool)bs_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)bs_endAppearanceTransition;
- (_Bool)bs_beginAppearanceTransitionForChildViewController:(id)arg1 toVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)bs_endAppearanceTransitionForChildViewController:(id)arg1;
- (_Bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;
- (_Bool)bs_removeChildViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;
- (id)bs_presentedViewControllerIncludingAncestors;
- (_Bool)bs_endAppearanceTransition:(_Bool)arg1;
- (_Bool)bs_endAppearanceTransitionForChildViewController:(id)arg1 toVisible:(_Bool)arg2;
- (_Bool)bs_addChildViewController:(id)arg1;
- (_Bool)bs_addChildViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;
- (_Bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2;
- (_Bool)bs_removeChildViewController:(id)arg1;
- (id)bs_presentationContextDefiningViewController;
- (id)bs_topPresentedViewController;

@end
