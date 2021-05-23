/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface HKSleepPeriodSegment : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _category;
    NSArray *_samples;
    double _duration;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long category;
@property (copy, nonatomic, readonly) NSArray *samples;
@property (nonatomic, readonly) double duration;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 category:(long long)arg3 samples:(id)arg4 duration:(double)arg5;

@end
