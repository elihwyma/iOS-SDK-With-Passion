/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface ATXTimeBucketedRateLimiter : NSObject

{
    unsigned long long _maxCount;
    double _period;
    NSDate *_endOfCurrentBucket;
    unsigned long long _countForCurrentBucket;
    NSDate *_now;
}

@property (retain, nonatomic) NSDate *now;

- (id)initWithMaxCount:(unsigned long long)arg1 perPeriod:(double)arg2;
- (void)_resetBucketIfNeeded;
- (_Bool)tryToIncrementCountAndReturnSuccess;

@end
