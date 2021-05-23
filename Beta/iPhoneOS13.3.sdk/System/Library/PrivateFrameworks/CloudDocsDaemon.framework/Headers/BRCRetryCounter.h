/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCRetryCounter : NSObject

{
    _Bool _scheduled;
    unsigned int _retryCount;
    long long _latestRetry;
    long long _throttleHash;
}

@property (nonatomic, readonly) unsigned int retryCount;
@property (nonatomic, readonly) long long latestRetry;
@property (nonatomic, readonly) long long throttleHash;

- (void)schedule;
- (void)incrementRetry;
- (id)initWithThrottleHash:(long long)arg1;

@end
