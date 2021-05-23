/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface NGMKeyValidator : NSObject

+ (id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2;
+ (_Bool)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id *)arg4;
+ (struct _NSRange)rangeOnPublicKey;
+ (id)versionByte;
+ (unsigned long long)validatorLength;

@end
