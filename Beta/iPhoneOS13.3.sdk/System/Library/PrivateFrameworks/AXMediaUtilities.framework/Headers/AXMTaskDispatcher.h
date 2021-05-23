/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol AXMTaskDispatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXMTaskDispatcher : NSObject

{
    NSObject<OS_dispatch_source> *_processQueueSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_taskList;
    _Bool _queue_taskIsBeingProcessed;
    id <AXMTaskDispatcherDelegate> _delegate;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) _Bool isEmpty;
@property (weak, nonatomic) id <AXMTaskDispatcherDelegate> delegate;

- (void)scheduleTask:(id)arg1;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (id)unscheduleAllTasks;
- (void)_queue_processNextTask;
- (long long)_queue_count;
- (id)_queue_dequeueTask;
- (void)_queue_scheduleTask:(id)arg1;
- (id)_queue_unscheduleAllTasks;

@end
