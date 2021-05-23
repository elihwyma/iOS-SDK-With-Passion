/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSMutableSet, SBAppStatusBarSettingsAssertion, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBHIconManager, SBIconController, SBUIController, UIView, _UILegibilitySettings;

@protocol BSInvalidatable;

@interface SBHomeScreenViewController : UIViewController

{
    NSMutableSet *_iconRotationPreventionReasons;
    _Bool _disableAnimationForNextIconRotation;
    SBFloatingDockBehaviorAssertion *_homeScreenFloatingDockAssertion;
    SBAppStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    UIView *_contentView;
    id <BSInvalidatable> _appIconForceTouchControllerOrientationUpdateDeferralAssertion;
    SBFloatingDockWindowLevelAssertion *_appIconForceTouchControllerWindowLevelAssertion;
    _Bool _iconControllerHidden;
    _Bool _homeScreenAutorotatesEvenWhenIconIsDragging;
    SBIconController *_iconController;
    SBUIController *_UIController;
    SBFloatingDockBehaviorAssertion *_widgetEditFloatingDockAssertion;
    id <BSInvalidatable> _widgetEditViewControllerOrientationUpdateDeferralAssertion;
}

@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion;
@property (retain, nonatomic) id <BSInvalidatable> widgetEditViewControllerOrientationUpdateDeferralAssertion;
@property (nonatomic, getter=isIconControllerHidden) _Bool iconControllerHidden;
@property (weak, nonatomic, readonly) SBIconController *iconController;
@property (weak, nonatomic, readonly) SBHIconManager *iconManager;
@property (weak, nonatomic, readonly) SBUIController *UIController;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) _Bool homeScreenAutorotatesEvenWhenIconIsDragging;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)setNeedsStatusBarAppearanceUpdate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_widgetEditViewWillAppear:(id)arg1;
- (void)_widgetEditViewDidDisappear:(id)arg1;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (id)initWithIconController:(id)arg1 UIController:(id)arg2;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)disableAnimationForNextIconRotation;
- (id)_autorotationPreventionReasons;
- (void)_appIconForceTouchControllerWillPresentNotification:(id)arg1;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)arg1;
- (id)homeScreenView;
- (void)_prepareForTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)_animateTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_cleanupAfterTransitionToSize:(struct CGSize)arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_acquireForceTouchOrientationUpdateDeferralAssertion;
- (void)_acquireForceTouchWindowLevelAssertionForIconView:(id)arg1;
- (void)_relinquishForceTouchOrientationUpdateDeferralAssertion;
- (void)_relinquishForceTouchWindowLevelAssertion;

@end
