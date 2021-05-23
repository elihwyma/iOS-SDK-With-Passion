/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSError.h>

@interface NSError (RCAdditions)

+ (id)rc_parsingError;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)rc_endpointErrorWithUnderlyingEndpointErrors:(id)arg1;
+ (id)rc_notAvailableError;
+ (id)rc_notCachedError;
+ (id)rc_offlineErrorWithReason:(long long)arg1;
+ (id)rc_missingConfigErrorWithUnderlyingError:(id)arg1;

- (_Bool)rc_isOfflineErrorOfflineReason:(long long *)arg1;
- (_Bool)rc_shouldRetry;
- (_Bool)rc_isNetworkUnavailableError;
- (_Bool)rc_isCancellationError;
- (_Bool)rc_isServiceUnavailableError;
- (_Bool)rc_isOperationThrottledError;
- (_Bool)rc_isOfflineError;

@end
