/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSASServerSideModel, MSTimerGate;

@protocol OS_dispatch_queue;

@interface MSASGroupedQueue : NSObject

{
    _Bool _isShuttingDown;
    _Bool _isAssertingBusyAssertion;
    int _maxGroupedCallbackEventBatchCount;
    MSASServerSideModel *_model;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
    MSTimerGate *_idleTimerGate;
    MSTimerGate *_stalenessTimerGate;
}

@property (retain, nonatomic) MSTimerGate *idleTimerGate;
@property (retain, nonatomic) MSTimerGate *stalenessTimerGate;
@property (weak, nonatomic) MSASServerSideModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (nonatomic, readonly) _Bool isAssertingBusyAssertion;
@property (nonatomic) _Bool isShuttingDown;

- (id)init;
- (_Bool)hasEnqueuedItems;
- (void)workQueueFlushQueue;
- (void)assertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (_Bool)memberQueueIsAssertingBusyAssertion;
- (void)memberQueueSetIsAssertingBusyAssertion:(_Bool)arg1;
- (void)shutDownFlush:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)flushQueueCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueRestartIdleTimer;
- (void)workQueueClearIdleTimer;
- (void)workQueueRestartStalenessTimer;
- (void)workQueueClearStalenessTimer;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueDidEnqueueSubsequentItem;

@end
