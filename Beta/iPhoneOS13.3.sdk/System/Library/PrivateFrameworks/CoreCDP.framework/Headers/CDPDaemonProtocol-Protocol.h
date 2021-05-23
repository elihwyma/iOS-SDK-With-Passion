/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@protocol CDPDaemonProtocol

- (unsigned short)setUserVisibleKeychainSyncEnabled:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeNonViewAwarePeersFromCircleWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCloudDataProtectionStateWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startCircleApplicationApprovalServerWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)repairCloudDataProtectionStateWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldPerformRepairForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recoverAndSynchronizeSquirrelWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recoverSquirrelWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)localSecretChangedTo:secretType:context:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)attemptToEscrowPreRecord:context:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)finishOfflineLocalSecretChangeWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateNewRecoveryKeyWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteRecoveryKeyWithContext:uiProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateRandomRecoveryKeyWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isICDPEnabledForDSID:checkWithServer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)hasLocalSecretWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)isUserVisibleKeychainSyncEnabledWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)performRecoveryWithContext:uiProvider:authProvider:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFollowUpWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postFollowUpWithContext:completion: /* Error: Ran out of types for this method. */;

@end
