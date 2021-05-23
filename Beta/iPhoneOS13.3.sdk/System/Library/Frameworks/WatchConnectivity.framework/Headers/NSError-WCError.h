/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSError.h>

@interface NSError (WCError)

+ (id)wcErrorWithCode:(long long)arg1;
+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)wcErrorFromReceivedCode:(long long)arg1;
+ (id)wcInternalErrorWithCode:(long long)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;

@end
