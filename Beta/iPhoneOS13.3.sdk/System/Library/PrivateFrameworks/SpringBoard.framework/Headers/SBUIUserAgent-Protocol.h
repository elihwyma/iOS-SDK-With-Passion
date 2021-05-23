/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBUIUserAgent <Swift>

@property (nonatomic) long long softwareUpdatePasscodePolicyType;

- (unsigned short)deviceIsLocked;
- (unsigned short)isInternalInstall;
- (unsigned short)activeInterfaceOrientation;
- (unsigned short)isScreenOn;
- (unsigned short)setIdleTimerDisabled:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)setIdleText: /* Error: Ran out of types for this method. */;
- (unsigned short)addActiveInterfaceOrientationObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeActiveInterfaceOrientationObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceIsBlocked;
- (unsigned short)deviceIsPasscodeLocked;
- (unsigned short)lockScreenIsShowing;
- (unsigned short)launchApplicationFromSource:withDisplayID:options: /* Error: Ran out of types for this method. */;
- (unsigned short)springBoardIsActive;
- (unsigned short)wifiRunLoopRef;
- (unsigned short)folderNameForDisplayID: /* Error: Ran out of types for this method. */;
- (unsigned short)canLaunchFromSource:withURL:bundleID: /* Error: Ran out of types for this method. */;
- (unsigned short)lockAndDimDeviceDisconnectingCallIfNecessary:andDimScreen: /* Error: Ran out of types for this method. */;
- (unsigned short)updateInterfaceOrientationIfNecessary;
- (unsigned short)foregroundApplicationDisplayID;
- (unsigned short)localizedDisplayNameForDisplayID: /* Error: Ran out of types for this method. */;
- (unsigned short)isApplicationForegroundObscured: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationInstalledForDisplayID: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceIsPasscodeLockedRemotely;
- (unsigned short)deviceIsTethered;
- (unsigned short)networkUsageTypeForAppWithDisplayID: /* Error: Ran out of types for this method. */;
- (unsigned short)openURL:allowUnlock:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)launchApplicationFromSource:withURL:options: /* Error: Ran out of types for this method. */;
- (unsigned short)isApplicationRestrictedOrHidden: /* Error: Ran out of types for this method. */;
- (unsigned short)undimScreen;
- (unsigned short)isIdleTimerDisabledForReason: /* Error: Ran out of types for this method. */;
- (unsigned short)addIdleTimerHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdleTimerHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)lockAndDimDevice;
- (unsigned short)lockAndDimDeviceDisconnectingCallIfNecessary: /* Error: Ran out of types for this method. */;
- (unsigned short)setBadgeNumberOrString:forApplicationWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)activateModalBulletinAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyOnNextUserEvent;
- (unsigned short)setMinimumBacklightLevel:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)activateRemoteAlertService:options: /* Error: Ran out of types for this method. */;
- (unsigned short)isNamedRemoteAlertServiceActive:controllerClassName: /* Error: Ran out of types for this method. */;
- (unsigned short)enableLockScreenBundleNamed:activationContext: /* Error: Ran out of types for this method. */;
- (unsigned short)disableLockScreenBundleNamed:deactivationContext: /* Error: Ran out of types for this method. */;
- (unsigned short)topSuspendedEventsOnlyDisplayID;

@end
