/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EDTaskScheduler : NSObject

{
    _Bool _observeForNetworkReachability;
    _Bool _isReachable;
    _Bool _pendingWaitingForNetwork;
    double _initialDelay;
    double _maxBackOffInterval;
    double _backoffMultiplier;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_executionQueue;
    double _backOffInterval;
    CDUnknownBlockType _task;
    CDUnknownBlockType _canceledCallback;
    CDUnknownBlockType _work;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic) double backOffInterval;
@property (nonatomic) _Bool isReachable;
@property (nonatomic) _Bool pendingWaitingForNetwork;
@property (copy, nonatomic) CDUnknownBlockType task;
@property (copy, nonatomic) CDUnknownBlockType canceledCallback;
@property (copy, nonatomic) CDUnknownBlockType work;
@property (nonatomic) double initialDelay;
@property (nonatomic) double maxBackOffInterval;
@property (nonatomic) double backoffMultiplier;
@property (nonatomic) _Bool observeForNetworkReachability;

- (void)dealloc;
- (id)initWithExecutionQueue:(id)arg1;
- (void)_cancelTimer;
- (void)scheduleTask:(CDUnknownBlockType)arg1 canceledCallback:(CDUnknownBlockType)arg2;
- (void)rescheduleTask;
- (void)_stopObservingNetworkReachability;
- (void)_doScheduleTask:(CDUnknownBlockType)arg1 canceledCallback:(CDUnknownBlockType)arg2;
- (void)_incrementBackoffInterval;
- (void)_startObservingNetworkReachability;
- (void)_reportReachabilityChange:(id)arg1;

@end
