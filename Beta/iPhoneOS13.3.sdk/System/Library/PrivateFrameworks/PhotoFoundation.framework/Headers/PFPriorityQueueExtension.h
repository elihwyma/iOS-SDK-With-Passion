/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueueExtension.h>

#import <PhotoFoundation/Swift-Protocol.h>

@class NSArray, NSMutableArray, PFDispatchQueue, PFSerialQueue;

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <Swift>

{
    PFDispatchQueue *_executionQueue;
    PFDispatchQueue *_serializer;
    unsigned long long _lastScheduledPriority;
    NSArray *_priorityLevels;
    NSMutableArray *_emptyNotifications;
    unsigned long long *_scheduledCount;
    PFSerialQueue *_schedulingQueue;
    unsigned long long _qosBlockCount[6];
    _Bool _queueSuspended;
    unsigned long long _schedulingSuspendCount;
    _Bool _performsConcurrentScheduling;
}

- (id)init;
- (void)dealloc;
- (void)installOnQueue:(id)arg1;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queueDidSuspend:(id)arg1;
- (void)queueWillResume:(id)arg1;
- (void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)enqueueWithPriority:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueEmptyNotification:(CDUnknownBlockType)arg1;
- (unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
- (void)suspendScheduling;
- (void)resumeScheduling;
- (id)initWithPriorityLevels:(unsigned long long)arg1 concurrentScheduling:(_Bool)arg2;
- (void)_scheduleBlock:(id)arg1;
- (void)_scheduleNextBlock;

@end
