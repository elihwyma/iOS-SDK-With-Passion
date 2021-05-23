/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementProgressEngine, ACHActivityAwardingDataProvider, ACHActivityAwardingEnvironment, ACHActivitySummaryUtility, ACHActivityTriggerGenerator, ACHDataStore, ACHEarnedInstanceAwardingEngine, ACHTemplateStore, HDProfile, HKActivitySummary, NSArray, NSCalendar, NSDictionary, NSMutableArray, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface ACHActivityAwardingSource : NSObject

{
    _Bool _isObservingSummaryUpdates;
    NSCalendar *_gregorianUTCCalendar;
    HDProfile *_profile;
    ACHEarnedInstanceAwardingEngine *_engine;
    ACHAchievementProgressEngine *_progressProvider;
    ACHDataStore *_dataStore;
    ACHTemplateStore *_templateStore;
    ACHActivityAwardingDataProvider *_dataProvider;
    ACHActivityTriggerGenerator *_triggerGenerator;
    ACHActivityAwardingEnvironment *_environment;
    NSMutableArray *_currentTemplates;
    ACHActivityAwardingDataProvider *_progressDataProvider;
    ACHActivityAwardingEnvironment *_progressEnvironment;
    HKActivitySummary *_todayActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    ACHActivitySummaryUtility *_activitySummaryUtility;
    CDUnknownBlockType _incrementalUpdateCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSNumber *_overrideIsAppleWatch;
    NSString *_overrideWatchCountryCode;
    NSString *_watchCountryCode;
}

@property (retain, nonatomic) NSCalendar *gregorianUTCCalendar;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHDataStore *dataStore;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider;
@property (retain, nonatomic) ACHActivityTriggerGenerator *triggerGenerator;
@property (retain, nonatomic) ACHActivityAwardingEnvironment *environment;
@property (retain, nonatomic) NSMutableArray *currentTemplates;
@property (retain, nonatomic) ACHActivityAwardingDataProvider *progressDataProvider;
@property (retain, nonatomic) ACHActivityAwardingEnvironment *progressEnvironment;
@property (retain, nonatomic) HKActivitySummary *todayActivitySummary;
@property (retain, nonatomic) HKActivitySummary *yesterdayActivitySummary;
@property (retain, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (copy, nonatomic) CDUnknownBlockType incrementalUpdateCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch;
@property (nonatomic, readonly) _Bool isAppleWatch;
@property (retain, nonatomic) NSString *overrideWatchCountryCode;
@property (retain, nonatomic) NSString *watchCountryCode;
@property (nonatomic) _Bool isObservingSummaryUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic, readonly) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;

- (unsigned char)_creatorDevice;
- (void)daemonReady:(id)arg1;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (_Bool)providesProgressForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_observeSummaries;
- (unsigned long long)_queue_triggersWithChangedSummaryFields:(unsigned long long)arg1 dataProvider:(id)arg2;
- (id)_queue_evaluateTriggers:(unsigned long long)arg1 activitySummary:(id)arg2 templates:(id)arg3 shouldLog:(_Bool)arg4;
- (void)_queue_updateDataProvider:(id)arg1 forDateInterval:(id)arg2 awardingBlock:(CDUnknownBlockType)arg3;
- (id)_queue_progressEnvironment;
- (id)_queue_companionProgressEnvironment;
- (void)_runIncrementallyForChangedSummaryFields:(unsigned long long)arg1;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 templateStore:(id)arg3 awardingEngine:(id)arg4 progressProvider:(id)arg5;

@end
