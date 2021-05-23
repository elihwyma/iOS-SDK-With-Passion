/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSError.h>

@interface NSError (AuthKit)

+ (id)ak_errorWithCode:(long long)arg1;
+ (id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)ak_wrappedAnisetteError:(int)arg1;

- (_Bool)ak_isUserCancelError;
- (_Bool)ak_isUserSkippedError;
- (_Bool)ak_isUserTryAgainError;
- (_Bool)ak_isUserInitiatedError;
- (_Bool)ak_isServiceError;
- (_Bool)ak_isAuthenticationErrorWithCode:(long long)arg1;
- (id)ak_errorByAppendingUserInfo:(id)arg1;

@end
