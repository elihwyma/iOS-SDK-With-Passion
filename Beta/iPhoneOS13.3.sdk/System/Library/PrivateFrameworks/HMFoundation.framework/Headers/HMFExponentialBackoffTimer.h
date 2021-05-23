/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFTimer.h>

@interface HMFExponentialBackoffTimer : HMFTimer

{
    _Bool _increasing;
    double _minimumTimeInterval;
    double _maximumTimeInterval;
    long long _exponentialFactor;
}

@property (nonatomic, readonly, getter=isIncreasing) _Bool increasing;
@property (nonatomic, readonly) double minimumTimeInterval;
@property (nonatomic, readonly) double maximumTimeInterval;
@property (nonatomic, readonly) long long exponentialFactor;

- (double)timeInterval;
- (void)reset;
- (void)__fire;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4;

@end
