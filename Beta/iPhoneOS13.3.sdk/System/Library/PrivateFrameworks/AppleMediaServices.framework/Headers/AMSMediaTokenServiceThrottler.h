/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceThrottler : NSObject

{
    double _baseSleepInterval;
    double _maxSleepInterval;
    unsigned long long _attemptNumber;
    NSDate *_throttleDate;
}

@property (nonatomic) unsigned long long attemptNumber;
@property (retain, nonatomic) NSDate *throttleDate;
@property (nonatomic) double baseSleepInterval;
@property (nonatomic) double maxSleepInterval;

- (void)reset;
- (double)_calculateThrottleInterval;
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;
- (_Bool)shouldThrottle;
- (void)throttle;

@end
