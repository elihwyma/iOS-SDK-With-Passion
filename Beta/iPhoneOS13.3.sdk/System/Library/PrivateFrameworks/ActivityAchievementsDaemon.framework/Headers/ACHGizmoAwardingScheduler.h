/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHDataStore, ACHEarnedInstanceAwardingEngine, HDProfile, NSSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACHGizmoAwardingScheduler : NSObject

{
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    NSSet *_blocksWaitingOnFirstEvaluation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    _Bool _needsRetry;
    _Bool _firstEvaluationComplete;
    _Bool _dataStoreHasPopulated;
    double _retryInterval;
    double _retryLeeway;
    CDUnknownBlockType _scheduledEvaluationCompleteBlock;
}

@property (nonatomic) double retryInterval;
@property (nonatomic) double retryLeeway;
@property (copy, nonatomic) CDUnknownBlockType scheduledEvaluationCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_queue_requestRetryingAwardingEvaluationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_cancelRetryAwardingEvaluationTimer;
- (void)_queue_scheduleRetryAwardingEvaluation;
- (void)requestAwardingEvaluationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dataStoreDidPopulate:(id)arg1;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 awardingEngine:(id)arg3;
- (void)performAfterFirstEvaluation:(CDUnknownBlockType)arg1;

@end
