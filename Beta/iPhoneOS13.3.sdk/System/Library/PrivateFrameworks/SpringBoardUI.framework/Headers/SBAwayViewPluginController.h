/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SBLockScreenPluginAction, SBLockScreenPluginMutableAppearanceContext, _UILegibilitySettings;

@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginViewController;

@interface SBAwayViewPluginController : UIViewController

{
    id <SBLockScreenPluginAgent> _agent;
    SBLockScreenPluginMutableAppearanceContext *_appearance;
    _Bool _viewCanBeDisplayed;
}

@property (nonatomic) long long orientation;
@property (nonatomic) _Bool viewCanBeDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBLockScreenPluginAgent> pluginAgent;
@property (nonatomic, readonly) long long pluginPriority;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (nonatomic, readonly) id <SBLockScreenPluginAppearance> pluginAppearance;
@property (retain, nonatomic, readonly) SBLockScreenPluginAction *pluginUnlockAction;

+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1;

- (id)init;
- (void)disable;
- (long long)presentationStyle;
- (id)_legibilitySettings;
- (id)customHeaderView;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (long long)overlayStyle;
- (long long)notificationBehavior;
- (_Bool)showStatusBar;
- (_Bool)showDateView;
- (_Bool)hasCustomSubtitle;
- (id)customSubtitleText;
- (_Bool)showDate;
- (_Bool)allowsSiri;
- (_Bool)allowsLockScreenCamera;
- (_Bool)allowsUnlocking;
- (_Bool)allowsLogout;
- (_Bool)wantsMesaAutoUnlock;
- (_Bool)allowsLockScreenMediaControls;
- (_Bool)allowsControlCenter;
- (_Bool)allowsScreenshots;
- (_Bool)legibilitySettingsOverridesVibrancy;
- (_Bool)isContentViewWhiteUnderSlideToUnlockText;
- (void)_updateAppearanceAndNotify:(_Bool)arg1;
- (void)setActivationContext:(id)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)purgeView;
- (id)slideToUnlockText;
- (id)bundleIDForUnlock;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (_Bool)shouldDisableOnUnlock;
- (_Bool)shouldDisableOnRelock;
- (_Bool)handleMenuButtonTap;
- (CDUnknownBlockType)enableTransitionBlock;
- (_Bool)viewWantsOverlayLayout;
- (_Bool)disablesAwayItemsCompletely;
- (_Bool)shouldAutoHideNotifications;
- (_Bool)pluginAnimatesAppearanceTransition:(_Bool)arg1;
- (id)pluginAnimateAppearanceTransition:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pluginWillActivateWithContext:(id)arg1;
- (void)pluginDidDeactivateWithContext:(id)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
- (void)setFullscreen:(_Bool)arg1 duration:(double)arg2;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)allowsTimer;
- (_Bool)allowsLockScreenHint;
- (_Bool)animateResumingToApplicationWithIdentifier:(id)arg1;
- (_Bool)showBatteryChargingText;
- (id)customSubtitleColor;
- (_Bool)allowsPhotoSlideshow;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)wantsMenuButtonHeldEvent;
- (_Bool)handleMenuButtonHeld;
- (void)setNeedsLegibilityAppearanceUpdate;

@end
