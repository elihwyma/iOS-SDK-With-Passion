/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CMPedometer, CMPedometerData, HDActivityCacheDataSource, HDProfile, HDSourceEntity, HKActivityCache, HKHeartRateSummary, HKQuantityType, NSCalendar, NSDate, NSDateInterval, NSHashTable, NSMutableDictionary, NSSet, NSString, NSTimeZone, _HKDelayedOperation;

@protocol OS_dispatch_queue;

@interface HDActivityCacheManager : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayActivityCacheIndex;
    long long _yesterdayActivityCacheIndex;
    long long _tomorrowActivityCacheIndex;
    _Bool _cacheIndicesAreSet;
    NSTimeZone *_currentTimeZone;
    NSDateInterval *_todayDateInterval;
    NSDateInterval *_yesterdayDateInterval;
    _Bool _existingActivityCachesAreSet;
    HKActivityCache *_existingYesterdayActivityCache;
    HKActivityCache *_existingTodayActivityCache;
    HKHeartRateSummary *_todayHeartRateSummary;
    HKHeartRateSummary *_yesterdayHeartRateSummary;
    HDSourceEntity *_localDeviceSourceEntity;
    HDActivityCacheDataSource *_dataSource;
    HKQuantityType *_calorieGoalType;
    HKQuantityType *_exerciseGoalType;
    HKQuantityType *_standGoalType;
    NSSet *_allQuantityTypes;
    NSMutableDictionary *_goalsByIndex;
    _HKDelayedOperation *_updateCachesOperation;
    _HKDelayedOperation *_rebuildCachesOperation;
    NSHashTable *_observers;
    _Bool _hasSubscribedToSignificantTimeChangeNotifications;
    long long _wheelchairUse;
    CMPedometer *_pedometer;
    CMPedometerData *_lastPedometerData;
    int _rebuildCacheNotificationToken;
    NSDate *_dateOverride;
    NSTimeZone *_timeZoneOverride;
}

@property (retain, nonatomic) NSDate *dateOverride;
@property (retain, nonatomic) NSTimeZone *timeZoneOverride;
@property (readonly) NSCalendar *calendar;
@property (nonatomic, readonly) HKActivityCache *currentActivityCache;
@property (nonatomic, readonly) HKActivityCache *yesterdayActivityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)daemonReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)addActivityCacheObserver:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (id)_queue_gregorianCalendar;
- (void)_queue_updateCaches;
- (void)_queue_rebuildActivityCaches;
- (_Bool)_queue_readyToSaveCaches;
- (id)_queue_saveCacheWithDateInterval:(id)arg1 calorieGoal:(id)arg2 exerciseGoal:(id)arg3 standGoal:(id)arg4 cacheIndex:(long long)arg5 previousCache:(id)arg6 statisticsBuilder:(id)arg7 wheelchairUse:(long long)arg8 generateStats:(_Bool)arg9;
- (void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1;
- (void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1;
- (_Bool)_queue_saveTodayCache;
- (_Bool)_queue_saveYesterdayCache;
- (void)_queue_alertObservers:(id)arg1 heartRateSummaryChanged:(id)arg2;
- (_Bool)_queue_readyToPrimeDataSource;
- (_Bool)_queue_calorieGoalSet;
- (_Bool)_queue_exerciseGoalSet;
- (_Bool)_queue_standGoalSet;
- (_Bool)_queue_allGoalsLoaded;
- (void)_queue_primeDailyGoalWithType:(id)arg1;
- (id)_mostRecentSampleWithType:(id)arg1 beforeDate:(id)arg2 error:(id *)arg3;
- (void)_queue_resetDailyGoalWithType:(id)arg1;
- (_Bool)_queue_updateGoalWithSample:(id)arg1;
- (void)_queue_primeCacheIndices;
- (void)_queue_primeLocalSource;
- (void)_queue_primeExistingActivityCaches;
- (void)_queue_primeDailyGoals;
- (void)_queue_primeDataSource;
- (void)_queue_saveCaches;
- (void)_queue_updateHeartRateSummaries;
- (id)_queue_currentDate;
- (void)_calculateCacheIndicesWithTodayIndex:(long long *)arg1 yesterdayIndex:(long long *)arg2 tomorrowIndex:(long long *)arg3 todayStart:(id)arg4 yesterdayStart:(id)arg5 tomorrowStart:(id)arg6 calendar:(id)arg7;
- (void)_queue_deleteActivityCaches:(id)arg1;
- (void)_queue_resetExistingActivityCaches;
- (void)_queue_updateDateIntervalsWithExistingActivityCaches;
- (void)_queue_resetCacheIndices;
- (void)_queue_resetDataSource;
- (id)_queue_currentTimeZone;
- (void)_queue_resetEverything;
- (_Bool)_queue_updateDailyGoalsWithSamples:(id)arg1;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)_queue_rebuildCachesIfNeededForTimeChange;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)_queue_streamSamplesAdded;
- (void)_queue_registerForSignificantTimeChangeNotification;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(CDUnknownBlockType)arg2;

@end
