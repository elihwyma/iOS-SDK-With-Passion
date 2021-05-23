/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIWeeklyGoalModel, HKActivityCache, HKActivitySummary, HKCurrentActivityCacheQuery, HKHealthStore, NSDictionary, NSHashTable, NSMutableDictionary, NSPredicate, _HKCurrentActivitySummaryQuery;

@protocol OS_dispatch_queue;

@interface FIUIModel : NSObject

{
    FIUIWeeklyGoalModel *_weeklyGoalModel;
    NSHashTable *_observers;
    NSMutableDictionary *_currentActivitySummaryQueryClients;
    NSMutableDictionary *_currentActivityCacheQueryClients;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    long long _queue_activitySummaryQueryRetries;
    long long _queue_activityCacheQueryRetries;
    HKActivitySummary *_queue_currentActivitySummaryForClients;
    HKActivityCache *_queue_currentActivityCacheForClients;
    NSObject<OS_dispatch_queue> *_activityQueryClientQueue;
    NSPredicate *_sourcesPredicate;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
    HKHealthStore *_healthStore;
    NSDictionary *_currentActivitySummaryQueryCollectionIntervalOverrides;
}

@property (nonatomic, readonly) FIUIWeeklyGoalModel *weeklyGoalModel;
@property (nonatomic, readonly) NSPredicate *sourcesPredicate;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (retain, nonatomic) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides;

+ (_Bool)isWheelchairUser;
+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)executeQuery:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)stopQuery:(id)arg1;
- (id)startCurrentActivitySummaryQueryWithHandler:(CDUnknownBlockType)arg1;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1;
- (void)_setKnownSources:(id)arg1;
- (id)_createCurrentActivitySummaryQuery;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (void)_printStatisticsCollection:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;

@end
