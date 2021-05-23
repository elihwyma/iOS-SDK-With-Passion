/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHDataStore, ACHEarnedInstanceStore, HDProfile, NSCalendar, NSDate, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingEngine : NSObject

{
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    CDStruct_7c8d061c _historicalEvaluationPolicy;
    NSMutableDictionary *_sourceRegistry;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_currentDateOverride;
    NSMutableDictionary *_queuedIncrementalEvaluations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)currentDate;
- (void)registerSource:(id)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (void)requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(CDUnknownBlockType)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)requestHistoricalEvaluationForAllSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_evaluateHistoryForSource:(id)arg1 databaseContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 historicalEvaluationPolicy:(CDStruct_7c8d061c)arg4;
- (unsigned long long)sourceCount;
- (id)dataStorePropertyProviderForSource:(id)arg1;
- (void)deregisterSource:(id)arg1;

@end
