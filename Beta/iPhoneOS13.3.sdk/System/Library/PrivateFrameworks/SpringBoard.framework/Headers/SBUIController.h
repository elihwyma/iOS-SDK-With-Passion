/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBHUDController, SBHomeScreenBackdropViewBase, SBHomeScreenWindow, SBIconContentView, SBIconController, SBMainScreenActiveInterfaceOrientationWindow, SBVolumeControl, SBWallpaperEffectView, SBWindow, UIForceStageInteractionProgress, UIStatusBar, UIView;

@interface SBUIController : NSObject <Swift>

{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    SBMainScreenActiveInterfaceOrientationWindow *_fakeSpringBoardStatusBarWindow;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBHomeScreenBackdropViewBase *_homeScreenBackdropView;
    SBWindow *_homeScreenDimmingWindow;
    SBWallpaperEffectView *_reachabilityWallpaperEffectView;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIForceStageInteractionProgress *_homeButtonForceProgress;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isFullyCharged:1;
    unsigned int _isBatteryCritical:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    float _batteryCapacity;
    _Bool _supportsDetailedBatteryCapacity;
    _Bool _disableAppSwitchForcePressDueToHomeButtonForce;
    int _powerStateUpdateToken;
    NSMutableDictionary *_powerSourceHasChimed;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    NSMutableSet *_contentRequiringReasons;
    _Bool _chargingChimeEnabled;
    SBIconController *_iconController;
}

@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic) _Bool chargingChimeEnabled;
@property (nonatomic) _Bool homeScreenAutorotatesEvenWhenIconIsDragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isOnAC) _Bool onAC;
@property (nonatomic, readonly, getter=isConnectedToExternalChargingSource) _Bool connectedToExternalChargingSource;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (struct CGRect)statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(struct CGRect)arg5 inReferenceSpace:(_Bool)arg6;
+ (struct CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2;
+ (struct CGAffineTransform)_transformAndFrame:(struct CGRect *)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(struct CGRect)arg4;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 remainderFrame:(struct CGRect *)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(_Bool)arg5;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(_Bool)arg4;
+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2;
+ (id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(_Bool)arg7;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)contentView;
- (id)window;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(id)arg2;
- (id)_legibilitySettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateBatteryState:(id)arg1;
- (void)_hideKeyboard;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (void)_deviceUILocked;
- (id)scalingView;
- (void)_updateLegibility;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_activateApplicationFromAccessibility:(id)arg1;
- (_Bool)isBatteryCharging;
- (float)batteryCapacity;
- (void)handleWillBeginReachabilityAnimation;
- (void)handleDidEndReachabilityAnimation;
- (void)playChargingChimeIfAppropriate;
- (void)suppressChimeForConnectedPowerSources;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)_setupHomeScreenContentBackdropView;
- (void)_setupHomeScreenDimmingWindow;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (void)statusBarOverridesDidChange:(id)arg1;
- (void)_reduceMotionStatusDidChange:(id)arg1;
- (void)externalChargingAccessoriesChanged;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (_Bool)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (void)setFakeSpringBoardStatusBarVisible:(_Bool)arg1;
- (id)_fakeSpringBoardStatusBar;
- (id)alertItemForPreventingLaunchOfApp:(id)arg1;
- (long long)transitionSourceForIconLocation:(id)arg1;
- (void)_willRevealOrHideContentView;
- (void)restoreContentWithOptions:(unsigned long long)arg1;
- (_Bool)isIconListViewTornDown;
- (void)_closeOpenFolderIfNecessary;
- (void)updateStatusBarLegibility;
- (void)_switchToHomeScreenWallpaperAnimated:(_Bool)arg1;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)restoreContent;
- (void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2;
- (void)tearDownIconListAndBar;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)_removeReachabilityEffectViewIfNecessary;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (_Bool)hasVisibleAlertItemOrSheet:(out _Bool *)arg1;
- (_Bool)dissmissAlertItemsAndSheetsIfPossible;
- (void)setIsConnectedToUnsupportedChargingAccessory:(_Bool)arg1;
- (void)ACPowerChanged;
- (int)batteryCapacityAsPercentage;
- (void)_enumeratePowerSourcesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_powerSourceWantsToPlayChime;
- (void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)disableAnimationForNextIconRotation;
- (id)_currentHomeScreenLegibilitySettings;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(_Bool)arg2;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1;
- (void)beginRequiringContentForReason:(id)arg1;
- (void)endRequiringContentForReason:(id)arg1;
- (_Bool)disableAppSwitchForcePressDueToHomeButtonForce;
- (_Bool)handleHomeButtonSinglePressUp;
- (_Bool)handleHomeButtonDoublePressDown;
- (_Bool)isFullyCharged;
- (_Bool)isConnectedToChargeIncapablePowerSource;
- (_Bool)isConnectedToUnsupportedChargingAccessory;
- (_Bool)supportsDetailedBatteryCapacity;
- (_Bool)isHeadsetDocked;
- (_Bool)isHeadsetBatteryCharging;
- (unsigned char)headsetBatteryCapacity;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;

@end
