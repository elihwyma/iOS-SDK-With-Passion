/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFNotifyObserver, AFQueue, AFWatchdogTimer, NSString;

@protocol OS_dispatch_queue;

@interface AFMyriadMonitor : NSObject

{
    long long _state;
    AFWatchdogTimer *_timer;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
    AFQueue *_completions;
    AFNotifyObserver *_beginObserver;
    AFNotifyObserver *_wonObserver;
    AFNotifyObserver *_lostObserver;
    AFNotifyObserver *_repostedWonObserver;
    double _myriadEventMonitorTimeout;
    _Bool _isRegisteredForMyriadEventNotification;
    _Bool _ignoreMyriadEvents;
    _Bool _didRequestCurrentDecisionResult;
    _Bool _ignoreRepostMyriadNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)stopMonitoring;
- (void)_clear;
- (void)waitForMyriadDecisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)startMonitoringWithTimeoutInterval:(double)arg1;
- (void)ignoreMyriadEvents:(_Bool)arg1;
- (void)dequeueBlocksWaitingForMyriadDecision;
- (id)_myriadStateToString:(long long)arg1;
- (void)_registerForMyriadEvents;
- (void)_setDecisionIsPending;
- (void)_fetchCurrentMyraidDecision;
- (void)_deregisterFromRepostedDecisionResultsObservers;
- (void)_dequeueBlocksWithSignal:(long long)arg1;
- (void)_deregisterFromMyriadEventNotifications;
- (void)_resultSeenWithValue:(_Bool)arg1;
- (void)_flushCompletions:(_Bool)arg1;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (_Bool)didWin;
- (void)_ignoreRepostMyriadNotification:(_Bool)arg1;

@end
