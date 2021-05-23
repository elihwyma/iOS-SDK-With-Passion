/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol AVTTaskScheduler, OS_dispatch_queue;

@interface AVTCoalescingInvertingTaskScheduler : NSObject

{
    NSMutableArray *_tasks;
    NSObject<OS_dispatch_queue> *_coalescingQueue;
    NSObject<OS_dispatch_queue> *_stateLock;
    id <AVTTaskScheduler> _backingScheduler;
    double _coalesingDelay;
}

@property (nonatomic, readonly) NSMutableArray *tasks;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *coalescingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (nonatomic, readonly) id <AVTTaskScheduler> backingScheduler;
@property (nonatomic, readonly) double coalesingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scheduleTask:(CDUnknownBlockType)arg1;
- (void)cancelAllTasks;
- (void)cancelTask:(CDUnknownBlockType)arg1;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;
- (void)performStateWork:(CDUnknownBlockType)arg1;
- (void)startTasksFrom:(CDUnknownBlockType)arg1;
- (id)initWithBackingScheduler:(id)arg1 coalescingQueue:(id)arg2 delay:(double)arg3 environment:(id)arg4;

@end
