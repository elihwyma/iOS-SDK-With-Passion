/*
 Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

#import <PairedUnlock/Swift-Protocol.h>

@protocol PUUnlockClient <Swift>

- (unsigned short)didPairForUnlock:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didUnpairForUnlock:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didEnableOnlyRemoteUnlock:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didDisableOnlyRemoteUnlock:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDeviceDidCompleteRemoteAction:remoteDeviceState:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDeviceDidUnlock;
- (unsigned short)remoteDeviceDidRemoveLockout:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didGetRemoteDeviceState:error: /* Error: Ran out of types for this method. */;

@end
