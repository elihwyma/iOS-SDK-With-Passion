/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@protocol CUPairingDaemonXPCInterface

- (unsigned short)getPairingIdentityWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)findPairedPeer:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePairingIdentityWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPairedPeersWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)savePairedPeer:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removePairedPeer:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startMonitoringWithOptions: /* Error: Ran out of types for this method. */;

@end
