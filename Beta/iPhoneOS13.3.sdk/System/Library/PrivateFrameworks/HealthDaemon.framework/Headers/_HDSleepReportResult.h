/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSDateInterval, NSDictionary;

@interface _HDSleepReportResult : NSObject

{
    NSDictionary *_inBedSamplesBySource;
    NSDateInterval *_dateInterval;
    NSCalendar *_calendar;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSArray *sources;
@property (nonatomic, readonly) _Bool usedAppleBedtimeAlarm;
@property (nonatomic, readonly) double appleBedtimeCorrection;
@property (nonatomic, readonly) double appleBedtimeDeltaFromSleepDayStart;
@property (nonatomic, readonly) NSDate *appleBedtime;
@property (nonatomic, readonly) NSDate *appleWaketime;
@property (nonatomic, readonly) NSDate *appleCorrectedBedtime;
@property (nonatomic, readonly) double appleTotalInBedTime;
@property (nonatomic, readonly) NSDate *appleFirstSleepInterruption;
@property (nonatomic, readonly) NSDate *appleStartOfLongestSleepInterval;
@property (nonatomic, readonly) NSDate *appleFinalWakeupTime;

+ (id)_correctedDateFromDate:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;

- (id)deviceForSource:(id)arg1;
- (id)sleepOnsetForSource:(id)arg1;
- (id)finalWakeupForSource:(id)arg1;
- (id)_firstAppleInBedSample;
- (id)_lastEndDateInSampleArray:(id)arg1;
- (id)initWithDateInterval:(id)arg1 inBedSamplesBySource:(id)arg2 calendar:(id)arg3;

@end
