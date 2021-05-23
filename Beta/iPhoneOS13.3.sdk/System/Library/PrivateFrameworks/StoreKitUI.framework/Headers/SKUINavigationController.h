/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUNavigationController.h>

@interface SKUINavigationController : SUNavigationController

- (id)description;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)attachPalette:(id)arg1 isPinned:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
- (void)_scheduleConfigurationOfNavigationBar;
- (void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(_Bool)arg2;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(_Bool)arg5 accessibilityButtonBackgroundTintColor:(id)arg6;
- (void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(_Bool)arg2;
- (void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1;

@end
