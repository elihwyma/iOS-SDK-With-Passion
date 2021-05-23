/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SBIdleTimerPolicyAggregator;

@interface SBUserAgent : NSObject

{
    NSMutableDictionary *_idleTimerDisableAssertions;
    SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long softwareUpdatePasscodePolicyType;
@property (retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;

- (id)init;
- (_Bool)deviceIsLocked;
- (_Bool)isInternalInstall;
- (long long)activeInterfaceOrientation;
- (_Bool)isScreenOn;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setIdleText:(id)arg1;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)lockScreenIsShowing;
- (_Bool)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (_Bool)springBoardIsActive;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (id)folderNameForDisplayID:(id)arg1;
- (_Bool)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(_Bool)arg4 options:(id)arg5;
- (_Bool)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3;
- (void)_cleanupFromBannerLaunch;
- (_Bool)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4 animate:(_Bool)arg5;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1 andDimScreen:(_Bool)arg2;
- (void)updateInterfaceOrientationIfNecessary;
- (id)foregroundApplicationDisplayID;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (_Bool)isApplicationForegroundObscured:(id)arg1;
- (_Bool)applicationInstalledForDisplayID:(id)arg1;
- (_Bool)deviceIsPasscodeLockedRemotely;
- (_Bool)deviceIsTethered;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (_Bool)openURL:(id)arg1 allowUnlock:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (_Bool)isApplicationRestrictedOrHidden:(id)arg1;
- (void)undimScreen;
- (_Bool)isIdleTimerDisabledForReason:(id)arg1;
- (void)addIdleTimerHandler:(id)arg1;
- (void)removeIdleTimerHandler:(id)arg1;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)activateModalBulletinAlert:(id)arg1;
- (void)notifyOnNextUserEvent;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(_Bool)arg2;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (_Bool)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (id)topSuspendedEventsOnlyDisplayID;
- (_Bool)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4;

@end
