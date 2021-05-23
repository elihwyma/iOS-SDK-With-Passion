/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class HDMultiTypeSortedSampleIterator, HDProfile, HKMCCalendarCache;

@interface HDMCDaySummaryEnumerator : NSObject

{
    HDProfile *_profile;
    CDStruct_ef5fcbe6 _dayIndexRange;
    HDMultiTypeSortedSampleIterator *_iterator;
    _Bool _ascending;
    HKMCCalendarCache *_calendarCache;
}

+ (id)daySummaryAtIndex:(long long)arg1 profile:(id)arg2 calendarCache:(id)arg3 error:(id *)arg4;
+ (id)daySummariesInIndexRange:(CDStruct_ef5fcbe6)arg1 profile:(id)arg2 calendarCache:(id)arg3 error:(id *)arg4;

- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2 dayIndexRange:(CDStruct_ef5fcbe6)arg3 ascending:(_Bool)arg4;
- (_Bool)enumerateWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_closeBuilders:(id)arg1 withIndexes:(id)arg2 handler:(CDUnknownBlockType)arg3 stop:(_Bool *)arg4;
- (void)_addSample:(id)arg1 toBuilders:(id)arg2 inRange:(CDStruct_ef5fcbe6)arg3;

@end
