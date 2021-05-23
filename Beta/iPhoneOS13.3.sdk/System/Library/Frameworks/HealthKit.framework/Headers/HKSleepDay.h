/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateInterval;

@interface HKSleepDay : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sleepPeriods;
    NSDateInterval *_dateInterval;
    double _inBedDuration;
    double _asleepDuration;
    double _asleepDurationGoal;
    long long _asleepDurationGoalSource;
    long long _numberOfInterruptions;
    double _timeAwakeDuringIntendedSleepPeriod;
    double _efficiency;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSArray *sleepPeriods;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double inBedDuration;
@property (nonatomic, readonly) double asleepDuration;
@property (nonatomic, readonly) double asleepDurationGoal;
@property (nonatomic, readonly) long long asleepDurationGoalSource;
@property (nonatomic, readonly) long long numberOfInterruptions;
@property (nonatomic, readonly) double timeAwakeDuringIntendedSleepPeriod;
@property (nonatomic, readonly) double efficiency;

- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3;
- (id)primarySleepPeriod;

@end
