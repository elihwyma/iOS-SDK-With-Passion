/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSError.h>

@interface NSError (Authentication)

@property (nonatomic, readonly) _Bool isAuthenticationError;
@property (nonatomic, readonly) _Bool isAuthKitUnableToPromptDueToNetworkError;
@property (nonatomic, readonly) _Bool isAuthKitUnableToPromptError;

- (_Bool)isLoginHardLimit;
- (_Bool)isLoginSoftLimit;
- (_Bool)isICSCRecoveryHardLimitError;
- (_Bool)isICSCInvalidError;
- (_Bool)isCoolDownError;
- (_Bool)isRecoveryPETHardLimitError;
- (_Bool)isRecoveryPETSoftLimitError;
- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;

@end
