/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCThrottleBase : NSObject

{
    NSString *_name;
    unsigned int _initialRetryCount;
    unsigned int _finalRetryCount;
    unsigned int _maximumElementCount;
    long long _minimumNsecsBetweenRetries;
    long long _maximumNsecsBetweenRetries;
    long long _nsecsBeforeForgettingCounter;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long nsecsBeforeForgettingCounter;

- (long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned int *)arg2 now:(long long)arg3;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (long long)retryBackoff:(unsigned int)arg1;
- (_Bool)isBlocking;

@end
