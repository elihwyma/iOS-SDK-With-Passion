/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension

{
    _Atomic unsigned long long _enqueuedCount;
    _Atomic unsigned long long _maxEnqueuedCount;
    _Atomic unsigned long long _executingCount;
    _Atomic unsigned long long _completedCount;
    _Atomic unsigned long long _executionTime;
    _Atomic unsigned long long _maxExecutionTime;
    _Atomic unsigned long long _maxWaitTime;
    _Atomic unsigned long long _totalWaitTime;
    unsigned long long _maxEnqueuedCountTrigger;
    unsigned long long _maxExecutionTimeTrigger;
    unsigned long long _maxWaitTimeTrigger;
    unsigned long long _lastLogTime;
}

- (id)init;
- (id)description;
- (void)installOnQueue:(id)arg1;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (id)newBlockInfo;
- (Class)blockInfoClass;
- (unsigned long long)executionTime;
- (unsigned long long)enqueuedCount;
- (unsigned long long)maxEnqueuedCount;
- (unsigned long long)executingCount;
- (unsigned long long)completedCount;
- (unsigned long long)maxExecutionTime;
- (unsigned long long)maxWaitTime;
- (unsigned long long)totalWaitTime;
- (_Bool)_shouldLog;
- (void)maxEnqueuedCountIncreased:(id)arg1;
- (void)maxExecutionTimeIncreased:(id)arg1;
- (void)maxWaitTimeIncreased:(id)arg1;
- (_Bool)_updateMaximum:(_Atomic unsigned long long *)arg1 value:(unsigned long long)arg2;
- (void)blockEnqueued:(id)arg1;
- (void)blockCompletedAfterWait:(unsigned long long)arg1 executionTime:(unsigned long long)arg2 queue:(id)arg3;

@end
