/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService

- (void)fetchUnlockCredentialSetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
