/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@protocol CDPRemoteSecretEntryDelegate

- (unsigned short)dismissRecoveryFlow:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteSecretEntry:didAcceptValidRemoteSecretForDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelledRemoteSecretEntry: /* Error: Ran out of types for this method. */;
- (unsigned short)exceededMaximumAttemptsForRemoteSecretEntry: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteSecretEntry:depletedRemainingAttemptsForDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)performRecoveryKeyRecovery: /* Error: Ran out of types for this method. */;
- (unsigned short)performRemoteApproval: /* Error: Ran out of types for this method. */;
- (unsigned short)performAccountReset: /* Error: Ran out of types for this method. */;
- (unsigned short)finishValidation:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)performingAccountRecovery;

@end
