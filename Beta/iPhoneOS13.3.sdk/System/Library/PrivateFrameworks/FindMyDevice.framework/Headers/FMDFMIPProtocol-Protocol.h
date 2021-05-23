/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <FindMyDevice/Swift-Protocol.h>

@protocol FMDFMIPProtocol <Swift>

- (unsigned short)enableLostModeWithInfo:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableLostModeUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)playSoundWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceActivationDidSucceedUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getFMIPStateUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getFmipAccountUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)didChangeFMIPAccountInfo:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)enableFMIPInContext:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableFMIPUsingToken:forPairedDeviceWithUDID:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)markAsMissingSupportedForPairedDeviceWithUDID:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)markPairedDeviceWithUDID:asMissingUsingToken:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)isActivationLockAllowedUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)isActivationLockEnabledUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)isActivationLockedUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)enableActivationLockUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveLostModeExitAuthToken:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)lowBatteryLocateEnabledUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)setLowBatteryLocateEnabled:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)signatureHeadersWithData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)soundStoppedForAccessoryIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)clearData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccessoriesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)_forceFMWUpgradeAlertUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)initiateLostModeExitAuthForApp:idsDeviceID:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableFMIPUsingToken:inContext:usingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getLockdownShouldDisableDeviceRestoreUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getLockdownShouldDisableDevicePairingUsingCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)activationLockVersionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setDailyLocateReportEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)showDailyLocateReport;

@end
