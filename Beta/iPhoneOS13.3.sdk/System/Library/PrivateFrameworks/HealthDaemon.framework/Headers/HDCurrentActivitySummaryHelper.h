/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDActivitySummaryQueryHelper, HDProfile, HKActivitySummary, NSArray, NSDate, NSHashTable, NSTimeZone;

@protocol OS_dispatch_queue;

@interface HDCurrentActivitySummaryHelper : NSObject

{
    HDProfile *_profile;
    HDActivitySummaryQueryHelper *_queryHelper;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayIndex;
    long long _yesterdayIndex;
    HKActivitySummary *_todaySummary;
    HKActivitySummary *_yesterdaySummary;
    _Bool _hasLoadedActivitySummaries;
    NSArray *_typesForDataCollection;
    NSHashTable *_observers;
    NSDate *_dateOverride;
    NSTimeZone *_timezoneOverride;
}

@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;
@property (readonly) _Bool hasLoadedActivitySummaries;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)_registerForSignificantTimeChangeNotification;
- (id)dateOverride;
- (void)setDateOverride:(id)arg1;
- (void)_handleSignificantTimeChangeNotification:(id)arg1;
- (void)_generateCacheIndexesWithTodayIndex:(long long *)arg1 yesterdayIndex:(long long *)arg2;
- (id)_queue_gregorianCalendar;
- (void)_queue_updateActivitySummaries:(id)arg1;
- (void)_queue_resetQueryHelper;
- (void)_queue_updateTodayActivitySummary:(id)arg1;
- (void)_queue_updateYesterdayActivitySummary:(id)arg1;
- (id)_createEmptyActivitySummaryForIndex:(long long)arg1;
- (unsigned long long)_changedFieldsBetweenPreviousActivitySummary:(id)arg1 andNewActivitySummary:(id)arg2;
- (void)_queue_alertObserversTodaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (void)_queue_alertObserversYesterdaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (void)_queue_setUpActivityQueryHelper;
- (_Bool)_queue_dateHasChanged;
- (void)setTimezoneOverride:(id)arg1;
- (id)timezoneOverride;

@end
