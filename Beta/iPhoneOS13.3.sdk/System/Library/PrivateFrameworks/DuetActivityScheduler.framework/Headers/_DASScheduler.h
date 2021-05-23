/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

#import <DuetActivityScheduler/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, NSXPCListenerEndpoint, _DASSubmissionRateLimiter;

@protocol OS_dispatch_queue, OS_os_log, _DASActivityBackgroundTasksSchedulerDelegate;

@interface _DASScheduler : NSObject <Swift>

{
    _Bool _interrupted;
    int _resubmitToken;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_endpoint;
    NSMutableDictionary *_submittedActivities;
    NSMutableDictionary *_delayedStartTasks;
    NSMutableDictionary *_startedActivities;
    NSMutableDictionary *_activityToDataMap;
    _DASSubmissionRateLimiter *_rateLimiter;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionCreationQueue;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_os_log> *_dasFrameworkLog;
    id <_DASActivityBackgroundTasksSchedulerDelegate> _backgroundTaskSchedulerDelegate;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) _Bool interrupted;
@property (nonatomic) int resubmitToken;
@property (retain, nonatomic) NSMutableDictionary *submittedActivities;
@property (retain, nonatomic) NSMutableDictionary *delayedStartTasks;
@property (retain, nonatomic) NSMutableDictionary *startedActivities;
@property (retain, nonatomic) NSMutableDictionary *activityToDataMap;
@property (retain, nonatomic) _DASSubmissionRateLimiter *rateLimiter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionCreationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *runQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *dasFrameworkLog;
@property (weak, nonatomic) id <_DASActivityBackgroundTasksSchedulerDelegate> backgroundTaskSchedulerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)sharedScheduler;
+ (id)scheduler;
+ (id)schedulerWithEndpoint:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)currentConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)policies;
- (void)submitActivity:(id)arg1 inGroup:(id)arg2;
- (void)submitActivity:(id)arg1 inGroupWithName:(id)arg2;
- (void)submitActivity:(id)arg1;
- (void)activityCanceled:(id)arg1;
- (void)activityCompleted:(id)arg1;
- (void)updateActivity:(id)arg1 withParameters:(id)arg2;
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;
- (void)submitActivities:(id)arg1;
- (void)createActivityGroup:(id)arg1;
- (void)handleEligibleActivities:(CDUnknownBlockType)arg1;
- (void)activityStarted:(id)arg1;
- (void)runActivitiesWithDelayedStart:(id)arg1;
- (void)runActivities:(id)arg1;
- (void)suspendActivities:(id)arg1;
- (void)cancelActivities:(id)arg1;
- (void)activity:(id)arg1 runWithoutHonoringPolicies:(id)arg2;
- (void)activity:(id)arg1 blockedOnPolicies:(id)arg2;
- (void)handleLaunchFromDaemonForActivities:(id)arg1;
- (void)willExpireBGTaskActivities:(id)arg1;
- (void)forceRunActivities:(id)arg1;
- (void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;
- (void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;
- (void)enterTestModeWithParameters:(id)arg1;
- (void)activityStartedWithParameters:(id)arg1;
- (void)activityStoppedWithParameters:(id)arg1;
- (void)getPendingTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupXPCConnectionWithEndpoint:(id)arg1;
- (void)unprotectedEstablishDaemonConnectionIfInterrupted;
- (void)resubmitRunningActivities;
- (void)resubmitPendingStartActivities;
- (void)resubmitPendingActivities;
- (void)connectToDaemon:(_Bool)arg1;
- (_Bool)submitActivityInternal:(id)arg1;
- (void)submitActivitiesInternal:(id)arg1;
- (void)handleRescindedActivity:(id)arg1;
- (void)handleNoLongerRunningActivities:(id)arg1;
- (void)updateBytesConsumedForActivity:(id)arg1 downloadedOnWifi:(unsigned long long)arg2 downloadedOnCell:(unsigned long long)arg3 uploadedOnWifi:(unsigned long long)arg4 uploadedOnCell:(unsigned long long)arg5;
- (id)runningActivities;
- (id)delayedRunningActivities;
- (id)runningGroupActivities;
- (_Bool)deferActivities:(id)arg1;
- (id)scoresForActivityWithName:(id)arg1;
- (id)activityRunStatistics;
- (id)currentPredictions;
- (double)remainingBalanceForBudgetWithName:(id)arg1;
- (id)blockingPoliciesWithParameters:(id)arg1;
- (void)pauseWithParameters:(id)arg1;
- (void)setBackgroundTasksSchedulerDelegate:(id)arg1;
- (id)submitTaskRequest:(id)arg1;
- (void)cancelTaskRequestWithIdentifier:(id)arg1;
- (void)cancelAllTaskRequests;
- (void)completeTaskRequest:(id)arg1;
- (id)submittedTaskState;

@end
