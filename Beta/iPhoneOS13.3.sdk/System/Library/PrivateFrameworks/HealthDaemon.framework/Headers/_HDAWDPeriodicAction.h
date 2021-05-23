/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertion, HDPeriodicActivity, HDProfile, NSDate, NSString;

@protocol OS_dispatch_queue;

@interface _HDAWDPeriodicAction : NSObject

{
    NSString *_waitingToRunKey;
    NSString *_lastSubmissionAttemptKey;
    NSString *_intervalCounterKey;
    NSString *_lastProcessedDateKey;
    long long _repeatInterval;
    long long _graceInterval;
    _Bool _requiresClassB;
    long long _intervalMultiple;
    long long _maximumAttemptCount;
    double _minimumDelayBetweenAttempts;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    CDUnknownBlockType _block;
    HDPeriodicActivity *_periodicActivity;
    long long _waitingToRun;
    NSDate *_lastSubmissionAttemptDate;
    long long _intervalCounter;
    NSDate *_lastProcessedDate;
    NSString *_taskName;
}

@property (nonatomic, readonly) long long waitingToRun;
@property (nonatomic, readonly) NSDate *lastSubmissionAttemptDate;
@property (nonatomic, readonly) NSDate *lastProcessedDate;
@property (nonatomic, readonly) long long intervalCounter;
@property (copy, nonatomic, readonly) NSString *taskName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)reset;
- (void)_loadState;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLastProcessedDate:(id)arg1;
- (void)_queue_setWaitingToRun:(long long)arg1;
- (void)_queue_setIntervalCounter:(long long)arg1;
- (void)_queue_prepareAccessibilityAssertionIfNeeded;
- (void)_queue_setLastProcessedDate:(id)arg1;
- (void)_queue_setLastSubmissionAttemptDate:(id)arg1;
- (void)_queue_registerActivity;
- (_Bool)doIfWaitingWithError:(id *)arg1;
- (_Bool)_queue_shouldAttemptToSubmit;
- (_Bool)_runBlockWithAccessibilityAssertion:(id)arg1 error:(id *)arg2;
- (void)_beginWaitingToRun;
- (void)doIfWaitingOnMaintenanceQueueWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTaskName:(id)arg1 keyPrefix:(id)arg2 xpcInterval:(long long)arg3 xpcGraceInterval:(long long)arg4 requiresClassB:(_Bool)arg5 intervalMultiple:(long long)arg6 maximumAttemptCount:(long long)arg7 minimumDelayBetweenAttempts:(double)arg8 profile:(id)arg9 block:(CDUnknownBlockType)arg10;
- (_Bool)doForced;

@end
