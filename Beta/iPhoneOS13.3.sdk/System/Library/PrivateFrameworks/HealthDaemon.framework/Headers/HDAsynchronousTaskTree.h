/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface HDAsynchronousTaskTree : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pendingTasks;
    NSMutableArray *_queue_pendingSubtasks;
    NSMutableArray *_queue_taskErrors;
    _Atomic _Bool _canceled;
    _Atomic _Bool _rejectAddTask;
    _Bool _queue_started;
    _Bool _queue_finished;
    CDUnknownBlockType _queue_completion;
    NSObject<OS_dispatch_queue> *_default_task_queue;
    NSString *_groupDescription;
}

@property (copy, nonatomic, readonly) NSString *groupDescription;
@property (nonatomic, readonly) NSArray *allErrors;

- (id)description;
- (void)cancel;
- (void)begin;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)initWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTaskOnQueue:(id)arg1 task:(CDUnknownBlockType)arg2;
- (void)addCheckpointTask:(CDUnknownBlockType)arg1;
- (void)addTaskOnQueue:(id)arg1 timeout:(double)arg2 task:(CDUnknownBlockType)arg3;
- (void)_queue_beginNextTask;
- (void)_queue_insertPendingSubtasks;
- (void)_queue_runPendingCheckpointTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_reportResult:(long long)arg1;
- (void)_queue_completeCurrentTaskWithResult:(long long)arg1 error:(id)arg2;
- (void)addTaskWithTimeout:(double)arg1 task:(CDUnknownBlockType)arg2;

@end
