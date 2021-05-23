/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString;

@protocol HDPeriodicActivityDelegate, OS_dispatch_queue, OS_os_log, OS_xpc_object;

@interface HDPeriodicActivity : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_lastSuccessfulRunDateUserDefaultsKey;
    CDUnknownBlockType _waitingActivityCompletion;
    NSString *_errorCountUserDefaultsKey;
    NSString *_minimumIntervalDefaultsKey;
    _Bool _unitTest_shouldDeferOverride;
    _Bool _hasUpdatedCriteria;
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    double _interval;
    id <HDPeriodicActivityDelegate> _delegate;
    NSObject<OS_xpc_object> *_currentActivity;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingCategory;
@property (nonatomic, readonly) double interval;
@property (weak, nonatomic, readonly) id <HDPeriodicActivityDelegate> delegate;
@property (nonatomic, readonly) long long errorCount;
@property (nonatomic, readonly) _Bool shouldDefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2;
+ (id)_userDefaultsKeyForName:(id)arg1 key:(id)arg2;

- (void)dealloc;
- (void)reset;
- (void)_performActivity:(id)arg1;
- (_Bool)_requiresProtectedData;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5;
- (id)lastSuccessfulRunDate;
- (void)_queue_performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isWaitingToRun;
- (void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4;
- (id)_dateForDefaultsKey:(id)arg1;
- (void)_queue_activityFinishedWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4;
- (long long)_queue_errorCount;
- (void)_queue_setLastSuccessfulRunDate:(id)arg1;
- (void)_queue_performActivityIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerActivity;
- (void)_queue_performActivityIfWaiting;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_queue_updateCriteriaForActivity:(id)arg1;
- (void)_queue_incrementErrorCount;
- (double)_queue_currentInterval;
- (id)_queue_criteriaForInterval:(double)arg1;
- (void)_queue_unitTest_activityFiredButRunDeclined;
- (void)synthesizeActivityFire;
- (void)unitTest_setShouldDefer:(_Bool)arg1;

@end
