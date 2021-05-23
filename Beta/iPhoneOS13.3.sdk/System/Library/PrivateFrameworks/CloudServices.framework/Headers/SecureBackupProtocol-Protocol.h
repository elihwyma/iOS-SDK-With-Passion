/*
 Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

#import <CloudServices/Swift-Protocol.h>

@protocol SecureBackupProtocol <Swift>

- (unsigned short)getAccountInfoWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)enableWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)recoverWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stashRecoveryDataWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)disableWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMetadataWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cachePassphraseWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)uncachePassphraseWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cacheRecoveryKeyWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)uncacheRecoveryKeyWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)changeSMSTargetWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startSMSChallengeWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCountrySMSCodesWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backOffDateWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setBackOffDateWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cachePassphraseWithRequestAsync: /* Error: Ran out of types for this method. */;
- (unsigned short)uncachePassphraseWithRequestAsync: /* Error: Ran out of types for this method. */;
- (unsigned short)notificationInfoWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)backupWithInfo:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stateCaptureWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareHSA2EscrowRecordContents:usesComplexPassphrase:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)beginHSA2PasscodeRequest:desirePasscodeImmediately:uuid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)recoverRecordContentsWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCertificatesWithRequest:reply: /* Error: Ran out of types for this method. */;

@end
