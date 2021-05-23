/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSMutableArray, NSMutableDictionary, NSString, _HDAWDPeriodicAction;

@protocol OS_dispatch_queue;

@interface HDAWDSubmissionManager : NSObject

{
    HDProfile *_profile;
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSMutableArray *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    _HDAWDPeriodicAction *_fitnessDailyAction;
    _Bool _started;
    int _fitnessDailyCollectionEnabledNotifyToken;
    CDUnknownBlockType _testHandler;
}

@property (copy, nonatomic) CDUnknownBlockType testHandler;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) double activitySummaryQueryTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)_actions;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (void)_queue_start;
- (_Bool)_computeAndSubmitDatabaseStatsMetric:(_Bool)arg1;
- (_Bool)_computeAndSubmitSleepAlarmStatistics:(_Bool)arg1;
- (_Bool)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(_Bool)arg2;
- (_Bool)_computeAndSubmitHeartDailyAnalyticsWithAction:(id)arg1 force:(_Bool)arg2;
- (_Bool)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(_Bool)arg2;
- (_Bool)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
- (void)_registerForFitnessDailyCollection;
- (void)_queue_updateFitnessDailyCollectionEnabled;
- (_Bool)isFitnessDailyCollectionEnabled;
- (long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4;
- (long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id *)arg3 error:(id *)arg4;
- (_Bool)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id *)arg5;
- (id)_updateMonthDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 error:(id *)arg5;
- (_Bool)_updateDatabaseStatsEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3;
- (long long)_objectRowCountWithTransaction:(id)arg1 afterRowId:(long long)arg2 error:(id *)arg3;
- (long long)_deletedRowCountWithTransaction:(id)arg1 error:(id *)arg2;
- (long long)_CDACountWithTransaction:(id)arg1 error:(id *)arg2;
- (long long)_manuallyEnteredTypesCountWithTransaction:(id)arg1 error:(id *)arg2;
- (long long)_nonAppleSourcesCountWithTransaction:(id)arg1 error:(id *)arg2;
- (long long)_nonAppleSourcesWithDataSince:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_hasWatchSourcesWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3;
- (_Bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(_Bool)arg4;
- (id)_newActivitySummaryQueryHelperWithFilter:(id)arg1 initialResultsHandler:(CDUnknownBlockType)arg2;
- (id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)motionToken;
- (_Bool)_activitySummaryForActivitySummaryIndex:(long long)arg1 activitySummaryOut:(id *)arg2 error:(id *)arg3;
- (id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id *)arg3;
- (_Bool)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id *)arg3 endDate:(id *)arg4 calendar:(id)arg5;
- (id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4;
- (id)_ecgClassificationsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)_aFibSamplesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)_generateHeartDailyAnalyticsWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_statisticsForTimeDeltas:(id)arg1;
- (id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2;
- (void)updateFitnessDailyCollectionEnabled;
- (_Bool)runTask:(id)arg1 error:(id *)arg2;
- (void)resetTask:(id)arg1;

@end
