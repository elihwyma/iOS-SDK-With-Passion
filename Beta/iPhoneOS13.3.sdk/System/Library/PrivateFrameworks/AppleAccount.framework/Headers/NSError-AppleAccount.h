/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSError.h>

@interface NSError (AppleAccount)

+ (id)aa_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)aa_errorWithCode:(long long)arg1;
+ (id)aa_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)aa_errorWithServerResponse:(id)arg1;

- (id)_aa_userReadableError;

@end
