/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface AVTSerialTaskScheduler : NSObject

{
    struct NSMutableArray *_priorityTasks;
    struct NSMutableArray *_backlogTasks;
    NSObject<OS_dispatch_queue> *_stateLock;
    long long _order;
}

@property (nonatomic, readonly) NSMutableArray *priorityTasks;
@property (nonatomic, readonly) NSMutableArray *backlogTasks;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (nonatomic, readonly) long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fifoSchedulerWithEnvironment:(id)arg1;
+ (CDUnknownBlockType)nextTaskToRunForPriorityTasks:(struct NSMutableArray *)arg1 backlogTasks:(struct NSMutableArray *)arg2 order:(long long)arg3;
+ (id)lifoSchedulerWithEnvironment:(id)arg1;

- (void)scheduleTask:(CDUnknownBlockType)arg1;
- (void)cancelAllTasks;
- (void)cancelTask:(CDUnknownBlockType)arg1;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;
- (void)performStateWork:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1 order:(long long)arg2;
- (void)startTask:(CDUnknownBlockType)arg1;
- (void)didCompleteTask:(CDUnknownBlockType)arg1;

@end
