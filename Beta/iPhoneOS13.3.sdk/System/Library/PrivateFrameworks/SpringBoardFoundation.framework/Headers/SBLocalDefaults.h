/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBAccessibilityDefaults, SBAppIconForceTouchDefaults, SBAppSwitcherDefaults, SBApplicationDefaults, SBBiometricAuthenticationDefaults, SBBootDefaults, SBCameraHardwareButtonDefaults, SBDemoDefaults, SBFloatingDockDefaults, SBGestureDefaults, SBHardwareDefaults, SBHomeScreenDefaults, SBIconDefaults, SBIdleTimerDefaults, SBLockScreenDefaults, SBMiscellaneousDefaults, SBMultiUserDefaults, SBNotificationCenterDefaults, SBNotificationDefaults, SBPIPDefaults, SBPowerDefaults, SBRecentDisplayItemsDefaults, SBRotationDefaults, SBSOSDefaults, SBSecurityDefaults, SBSetupDefaults, SBSoftwareUpdateDefaults, SBSoundDefaults, SBStatusBarDefaults, SBTestingDefaults, SBThermalDefaults, SBUsageDefaults, SBVoiceControlDefaults, SBWallpaperDefaults, SBWorkspaceDefaults;

@interface SBLocalDefaults : SBAbstractDefaults

{
    SBAccessibilityDefaults *_lazy_accessibilityDefaults;
    SBAppIconForceTouchDefaults *_lazy_appIconForceTouchDefaults;
    SBApplicationDefaults *_lazy_applicationDefaults;
    SBAppSwitcherDefaults *_lazy_appSwitcherDefaults;
    SBBiometricAuthenticationDefaults *_lazy_biometricAuthenticationDefaults;
    SBBootDefaults *_lazy_bootDefaults;
    SBCameraHardwareButtonDefaults *_lazy_cameraHardwareButtonDefaults;
    SBRecentDisplayItemsDefaults *_lazy_recentDisplayItemsDefaults;
    SBDemoDefaults *_lazy_demoDefaults;
    SBGestureDefaults *_lazy_gestureDefaults;
    SBHardwareDefaults *_lazy_hardwareDefaults;
    SBIconDefaults *_lazy_iconDefaults;
    SBIdleTimerDefaults *_lazy_idleTimerDefaults;
    SBLockScreenDefaults *_lazy_lockScreenDefaults;
    SBMiscellaneousDefaults *_lazy_miscellaneousDefaults;
    SBMultiUserDefaults *_lazy_multiUserDefaults;
    SBNotificationDefaults *_lazy_notificationDefaults;
    SBNotificationCenterDefaults *_lazy_notificationCenterDefaults;
    SBPIPDefaults *_lazy_pipDefaults;
    SBPowerDefaults *_lazy_powerDefaults;
    SBRotationDefaults *_lazy_rotationDefaults;
    SBSecurityDefaults *_lazy_securityDefaults;
    SBSetupDefaults *_lazy_setupDefaults;
    SBSoftwareUpdateDefaults *_lazy_softwareUpdateDefaults;
    SBSOSDefaults *_lazy_sosDefaults;
    SBSoundDefaults *_lazy_soundDefaults;
    SBStatusBarDefaults *_lazy_statusBarDefaults;
    SBThermalDefaults *_lazy_thermalDefaults;
    SBUsageDefaults *_lazy_usageDefaults;
    SBVoiceControlDefaults *_lazy_voiceControlDefaults;
    SBWallpaperDefaults *_lazy_wallpaperDefaults;
    SBWorkspaceDefaults *_lazy_workspaceDefaults;
    SBFloatingDockDefaults *_lazy_floatingDockDefaults;
    SBTestingDefaults *_lazy_testingDefaults;
    SBHomeScreenDefaults *_lazy_homeScreenDefaults;
}

@property (retain, nonatomic, readonly) SBAccessibilityDefaults *accessibilityDefaults;
@property (retain, nonatomic, readonly) SBAppIconForceTouchDefaults *appIconForceTouchDefaults;
@property (retain, nonatomic, readonly) SBApplicationDefaults *applicationDefaults;
@property (retain, nonatomic, readonly) SBAppSwitcherDefaults *appSwitcherDefaults;
@property (retain, nonatomic, readonly) SBBootDefaults *bootDefaults;
@property (retain, nonatomic, readonly) SBCameraHardwareButtonDefaults *cameraHardwareButtonDefaults;
@property (retain, nonatomic, readonly) SBRecentDisplayItemsDefaults *recentDisplayItemsDefaults;
@property (retain, nonatomic, readonly) SBDemoDefaults *demoDefaults;
@property (retain, nonatomic, readonly) SBGestureDefaults *gestureDefaults;
@property (retain, nonatomic, readonly) SBHardwareDefaults *hardwareDefaults;
@property (retain, nonatomic, readonly) SBIconDefaults *iconDefaults;
@property (retain, nonatomic, readonly) SBIdleTimerDefaults *idleTimerDefaults;
@property (retain, nonatomic, readonly) SBLockScreenDefaults *lockScreenDefaults;
@property (retain, nonatomic, readonly) SBBiometricAuthenticationDefaults *biometricAuthenticationDefaults;
@property (retain, nonatomic, readonly) SBMiscellaneousDefaults *miscellaneousDefaults;
@property (retain, nonatomic, readonly) SBMultiUserDefaults *multiUserDefaults;
@property (retain, nonatomic, readonly) SBNotificationDefaults *notificationDefaults;
@property (retain, nonatomic, readonly) SBNotificationCenterDefaults *notificationCenterDefaults;
@property (retain, nonatomic, readonly) SBPIPDefaults *pipDefaults;
@property (retain, nonatomic, readonly) SBPowerDefaults *powerDefaults;
@property (retain, nonatomic, readonly) SBRotationDefaults *rotationDefaults;
@property (retain, nonatomic, readonly) SBSecurityDefaults *securityDefaults;
@property (retain, nonatomic, readonly) SBSetupDefaults *setupDefaults;
@property (retain, nonatomic, readonly) SBSoftwareUpdateDefaults *softwareUpdateDefaults;
@property (retain, nonatomic, readonly) SBSOSDefaults *sosDefaults;
@property (retain, nonatomic, readonly) SBSoundDefaults *soundDefaults;
@property (retain, nonatomic, readonly) SBStatusBarDefaults *statusBarDefaults;
@property (retain, nonatomic, readonly) SBThermalDefaults *thermalDefaults;
@property (retain, nonatomic, readonly) SBUsageDefaults *usageDefaults;
@property (retain, nonatomic, readonly) SBVoiceControlDefaults *voiceControlDefaults;
@property (retain, nonatomic, readonly) SBWallpaperDefaults *wallpaperDefaults;
@property (retain, nonatomic, readonly) SBWorkspaceDefaults *workspaceDefaults;
@property (retain, nonatomic, readonly) SBFloatingDockDefaults *floatingDockDefaults;
@property (retain, nonatomic, readonly) SBTestingDefaults *testingDefaults;
@property (retain, nonatomic, readonly) SBHomeScreenDefaults *homeScreenDefaults;

- (void)migrateAndRemoveOldDefaults;

@end
