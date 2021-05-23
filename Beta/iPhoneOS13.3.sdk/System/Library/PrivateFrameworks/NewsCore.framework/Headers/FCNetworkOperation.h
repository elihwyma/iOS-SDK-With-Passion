/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation

@property (nonatomic, readonly) double preferredTimeoutIntervalForRequest;

- (unsigned long long)maxRetries;
- (_Bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double *)arg2;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (_Bool)_canRetryWithError:(id)arg1 retryAfter:(id *)arg2;

@end
