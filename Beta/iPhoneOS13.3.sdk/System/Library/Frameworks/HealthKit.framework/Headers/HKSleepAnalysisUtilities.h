/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKSleepAnalysisUtilities : NSObject

+ (id)boundingDateIntervalsForDateIntervals:(id)arg1;
+ (id)filterSleepSamples:(id)arg1 categoryValue:(long long)arg2;
+ (double)durationFromDateIntervals:(id)arg1;
+ (id)sleepPeriodSegmentsFromSleepSamples:(id)arg1 minimumInterSegmentTimeInterval:(double)arg2 categoryValue:(long long)arg3;
+ (void)enumerateSleepPeriodsForAnalysis:(id)arg1 calendar:(id)arg2 dateInterval:(id)arg3 dateComponents:(id)arg4 analysisBlock:(CDUnknownBlockType)arg5;
+ (id)sortedSleepPeriodSegmentsFromSleepSamples:(id)arg1;
+ (id)_periodsBySourceForSamples:(id)arg1 calendar:(id)arg2;
+ (id)_aggregatedPeriodsForPeriodsBySource:(id)arg1 orderedSources:(id)arg2;
+ (void)categorizeSleepPeriods:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
+ (id)_samplesBySourceForSamples:(id)arg1;
+ (id)sleepPeriodsFromSamples:(id)arg1 calendar:(id)arg2;
+ (id)sleepAnalysisDateIntervalWithCalendar:(id)arg1 visibleRangeStartDate:(id)arg2 visibleRangeEndDate:(id)arg3 startOfDayTransform:(CDUnknownBlockType)arg4;
+ (id)filterSleepPeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepDays:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (_Bool)findBedtimeAlarmAndUpdateSleepPeriods:(id)arg1 calendar:(id)arg2 startOfDayTransform:(CDUnknownBlockType)arg3;
+ (id)dateIntervalBoundingSleepPeriods:(id)arg1;
+ (id)sleepDaysFromQueryResult:(id)arg1 calendar:(id)arg2 startOfDayTransform:(CDUnknownBlockType)arg3 orderedSources:(id)arg4;
+ (id)sleepAnalysisForSleepDays:(id)arg1;
+ (id)sleepAnalysisIntervalForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 stratOfDayTransform:(CDUnknownBlockType)arg4;

@end
