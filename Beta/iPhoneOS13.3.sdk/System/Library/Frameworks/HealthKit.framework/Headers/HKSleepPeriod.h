/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateInterval, NSString;

@interface HKSleepPeriod : NSObject

{
    _Bool _startDateConformsToIntendedBedtime;
    _Bool _endDateConformsToIntendedBedtime;
    _Bool _consistent;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
    long long _type;
    double _duration;
    double _inBedDuration;
    double _asleepDuration;
    NSDateInterval *_intendedBedtime;
    long long _intendedBedtimeType;
    double _startDateOffsetFromIntendedBedtime;
    double _endDateOffsetFromIntendedBedtime;
    double _asleepDurationGoal;
    long long _asleepDurationGoalSource;
    double _timeToFallAsleep;
    double _timeToGetOutOfBed;
    double _timeAwakeDuringIntendedSleepPeriod;
    double _efficiency;
    long long _numberOfInterruptions;
    NSArray *_segments;
    NSString *_timeZoneName;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double inBedDuration;
@property (nonatomic, readonly) double asleepDuration;
@property (nonatomic, readonly) NSDateInterval *intendedBedtime;
@property (nonatomic, readonly) long long intendedBedtimeType;
@property (nonatomic, readonly) _Bool startDateConformsToIntendedBedtime;
@property (nonatomic, readonly) double startDateOffsetFromIntendedBedtime;
@property (nonatomic, readonly) _Bool endDateConformsToIntendedBedtime;
@property (nonatomic, readonly) double endDateOffsetFromIntendedBedtime;
@property (nonatomic, readonly) double asleepDurationGoal;
@property (nonatomic, readonly) long long asleepDurationGoalSource;
@property (nonatomic, readonly) double timeToFallAsleep;
@property (nonatomic, readonly) double timeToGetOutOfBed;
@property (nonatomic, readonly) double timeAwakeDuringIntendedSleepPeriod;
@property (nonatomic, readonly) double efficiency;
@property (nonatomic, readonly) long long numberOfInterruptions;
@property (nonatomic, readonly, getter=isConsistent) _Bool consistent;
@property (copy, nonatomic, readonly) NSArray *segments;
@property (copy, nonatomic, readonly) NSString *timeZoneName;

- (void)_setType:(long long)arg1;
- (id)_firstBedtimeAlarmWithCalendar:(id)arg1;
- (void)_setIntendedBedtime:(id)arg1 type:(long long)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 segments:(id)arg3;
- (void)enumerateDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)segmentsForCategory:(long long)arg1;
- (id)segmentDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2;

@end
