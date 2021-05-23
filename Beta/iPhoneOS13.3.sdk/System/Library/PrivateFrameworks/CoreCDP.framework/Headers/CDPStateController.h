/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController

- (_Bool)isManateeAvailable:(id *)arg1;
- (void)startCircleApplicationApprovalServer:(CDUnknownBlockType)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteRecoveryKey:(CDUnknownBlockType)arg1;
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;
- (void)attemptToEscrowPreRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleURLActionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverAndSynchronizeWithSquirrel:(CDUnknownBlockType)arg1;
- (void)recoverWithSquirrel:(CDUnknownBlockType)arg1;
- (void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldPerformRepair:(id *)arg1;
- (_Bool)deleteRecoveryKeyWithError:(id *)arg1;
- (id)generateRandomRecoveryKey:(id *)arg1;
- (void)handleURLActionWithInfo:(id)arg1;

@end
