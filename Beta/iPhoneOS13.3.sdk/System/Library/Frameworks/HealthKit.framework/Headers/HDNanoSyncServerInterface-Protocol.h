/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HDNanoSyncServerInterface <Swift>

- (unsigned short)remote_fetchNanoSyncPairedDevicesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_forceNanoSyncWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetNanoSyncWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_waitForLastChanceSyncWithDevicePairingID:timeout:completion: /* Error: Ran out of types for this method. */;

@end
