/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHDataStore, ACHEarnedInstanceAwardingEngine, ACHEarnedInstanceStore, ACHTemplateStore, HDKeyValueDomain, HDMaintenanceOperation, HDPeriodicActivity, HDProfile, NSCalendar, NSDate, NSMutableArray, NSNumber, NSString, _HKDelayedOperation;

@protocol OS_dispatch_queue;

@interface ACHCompanionAwardingScheduler : NSObject

{
    _Bool _shouldRetryEarnedInstanceDeletion;
    NSDate *_lastSuccessfulRunDate;
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    HDPeriodicActivity *_scheduler;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_forceActivityAppInstalled;
    _HKDelayedOperation *_operation;
    NSMutableArray *_awardEvaluationCompletionBlocks;
    NSObject<OS_dispatch_queue> *_awardingEvaluationQueue;
    NSNumber *_coalescingDelayOverride;
    HDKeyValueDomain *_localKeyValueDomain;
    HDMaintenanceOperation *_maintenanceOperation;
}

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHDataStore *dataStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceAwardingEngine *awardingEngine;
@property (retain, nonatomic) HDPeriodicActivity *scheduler;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool shouldRetryEarnedInstanceDeletion;
@property (retain, nonatomic) NSNumber *forceActivityAppInstalled;
@property (retain, nonatomic) _HKDelayedOperation *operation;
@property (retain, nonatomic) NSMutableArray *awardEvaluationCompletionBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *awardingEvaluationQueue;
@property (retain, nonatomic) NSNumber *coalescingDelayOverride;
@property (retain, nonatomic) HDKeyValueDomain *localKeyValueDomain;
@property (retain, nonatomic) NSDate *lastSuccessfulRunDate;
@property (retain, nonatomic) HDMaintenanceOperation *maintenanceOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2;
- (void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2;
- (void)templateStoreDidFinishInitialFetch:(id)arg1;
- (void)requestAwardingEvaluationWithCompletion:(CDUnknownBlockType)arg1;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;
- (_Bool)_userInfoContainsCompanionActivityBundleID:(id)arg1;
- (void)_queue_removeAllEarnedInstances;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (void)_applicationsInstalled:(id)arg1;
- (void)_applicationsUninstalled:(id)arg1;
- (_Bool)_shouldRunImmediatelyOnTemplateLoad;
- (void)scheduleMaintenanceTaskForAwardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_addAwardingCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_requestAwardingEvaluation;
- (void)_queue_removeMaintenanceOperation;
- (void)setlastSuccessfulRunDate:(id)arg1;
- (void)_queue_callAwardingCompletionsWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)_didRunToday;
- (void)_queue_performCleanupTasks;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 templateStore:(id)arg4 awardingEngine:(id)arg5;
- (void)clearLastSuccessfulRunDate;
- (void)shouldForceActivityAppInstalled:(_Bool)arg1;
- (void)overrideCoalescingDelay:(double)arg1;
- (void)addAwardingCompletion:(CDUnknownBlockType)arg1;

@end
