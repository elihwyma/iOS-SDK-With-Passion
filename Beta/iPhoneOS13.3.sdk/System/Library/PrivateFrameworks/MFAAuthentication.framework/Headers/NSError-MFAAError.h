/*
 Image: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
 */

#import <Foundation/NSError.h>

@interface NSError (MFAAError)

+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2;
+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2 failureReason:(id)arg3;

@end
