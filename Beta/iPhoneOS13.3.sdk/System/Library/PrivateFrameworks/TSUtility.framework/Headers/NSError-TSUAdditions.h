/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSError.h>

@interface NSError (TSUAdditions)

+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 underlyingError:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsuErrorWithCode:(long long)arg1;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_IOErrorWithCode:(long long)arg1;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;

- (id)tsu_localizedAlertTitle;
- (id)tsu_localizedAlertMessage;
- (_Bool)tsu_isOutOfSpaceError;
- (_Bool)tsu_isCancelError;

@end
