/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (SafeAppearancePropagation)

- (void)ccui_safelyBeginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)ccui_safelyEndAppearanceTransition;
- (void)ccui_safelyBeginAppearanceTransitionForChildViewControllers:(_Bool)arg1 animated:(_Bool)arg2;
- (void)ccui_safelyEndAppearanceTransitionForChildViewControllers;
- (id)_ccui_childViewControllersForAppearancePropagation;

@end
