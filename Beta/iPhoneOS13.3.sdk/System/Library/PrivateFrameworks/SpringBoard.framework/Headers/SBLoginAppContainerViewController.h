/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLockScreenViewControllerBase.h>

@class NSHashTable, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBLockScreenBatteryChargingViewController, SBLockScreenPluginManager, SBLockScreenTemperatureWarningViewController, SBLoginAppContainerPluginWrapperViewController, SBWallpaperController;

@protocol BSInvalidatable, SBLoginAppSceneHoster;

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase

{
    id <SBLoginAppSceneHoster> _sceneHoster;
    SBLockScreenBatteryChargingViewController *_batteryChargingViewController;
    SBLockScreenTemperatureWarningViewController *_thermalWarningViewController;
    SBLoginAppContainerPluginWrapperViewController *_pluginWrapperViewController;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_showStatusBarReasons;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    long long _idleTimerMode;
    SBLockScreenPluginManager *_pluginManager;
    SBWallpaperController *_wallpaperController;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldShowLockStatusBarTime;
- (void)_updateLegibility;
- (void)noteDeviceBlockedStatusUpdated;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesScreenshots;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)willUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (void)prepareForUILock;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (_Bool)shouldDisableALS;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)sceneUpdatedIdleTimerMode:(long long)arg1;
- (void)sceneUpdatedStatusBarUserName:(id)arg1;
- (void)sceneUpdatedRotationMode:(long long)arg1;
- (void)sceneUpdatedWallpaperMode:(unsigned long long)arg1;
- (void)sceneInvalidated;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (id)_statusBarSettingsAssertion;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (_Bool)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)chargingViewControllerFadedOutContent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 sceneHoster:(id)arg3 wallpaperController:(id)arg4;
- (void)_handleBacklightFadeEnded;
- (void)_reallyRelinquishStatusBarAssertion;
- (void)_showOrHideThermalTrapUIAnimated:(_Bool)arg1;
- (void)_updateBatteryChargingViewAnimated:(_Bool)arg1;
- (id)loginContainerView;
- (void)_setupLoginScene;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1;
- (void)_addBatteryChargingView;
- (void)_fadeViewsForChargingViewVisible:(_Bool)arg1;
- (void)_removeBatteryChargingView;
- (id)_initWithSceneHoster:(id)arg1 wallpaperController:(id)arg2;
- (void)addLoginObserver:(id)arg1;
- (void)removeLoginObserver:(id)arg1;
- (_Bool)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (id)_displayLayoutElementIdentifier;
- (void)_setupLoginAppHosting;
- (void)_killLoginApp;
- (id)_hostedAppBundleID;
- (id)_hostedAppView;
- (id)_hostedSceneIdentifier;
- (void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(_Bool)arg1;

@end
