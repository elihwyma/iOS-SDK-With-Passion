/*
 Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

#import <PairedUnlock/Swift-Protocol.h>

@protocol PUUnlockServer <Swift>

- (unsigned short)checkIn;
- (unsigned short)pairForUnlockWithPasscode: /* Error: Ran out of types for this method. */;
- (unsigned short)unpairForUnlock;
- (unsigned short)enableOnlyRemoteUnlockWithPasscode: /* Error: Ran out of types for this method. */;
- (unsigned short)disableOnlyRemoteUnlock;
- (unsigned short)requestRemoteDeviceRemoteAction:type: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRemoteDeviceUnlockNotification;
- (unsigned short)requestRemoteDeviceRemoveLockout;
- (unsigned short)didCompleteRemoteAction:error: /* Error: Ran out of types for this method. */;
- (unsigned short)queryRemoteDeviceState: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDeviceSetWristDetectionDisabled:completion: /* Error: Ran out of types for this method. */;

@end
