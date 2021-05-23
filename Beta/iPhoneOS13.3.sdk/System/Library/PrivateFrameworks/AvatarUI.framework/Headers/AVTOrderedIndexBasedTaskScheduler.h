/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface AVTOrderedIndexBasedTaskScheduler : NSObject

{
    struct NSMutableDictionary *_scheduledTasks;
    struct NSMutableArray *_scheduledTasksOrder;
    struct NSMutableDictionary *_readyTasks;
    NSObject<OS_dispatch_queue> *_stateLock;
}

@property (nonatomic, readonly) NSMutableDictionary *scheduledTasks;
@property (nonatomic, readonly) NSMutableArray *scheduledTasksOrder;
@property (nonatomic, readonly) NSMutableDictionary *readyTasks;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)rowBaseIndexForIndex:(id)arg1;
+ (id)indexesForReadyTasksToRunGivenScheduledTasks:(struct NSMutableDictionary *)arg1 order:(struct NSMutableArray *)arg2 readyTasks:(struct NSMutableDictionary *)arg3 readyRowIndex:(id)arg4;

- (void)cancelAllTasks;
- (id)initWithEnvironment:(id)arg1;
- (void)cancelTask:(CDUnknownBlockType)arg1;
- (void)scheduleTask:(CDUnknownBlockType)arg1 forIndex:(unsigned long long)arg2;
- (void)taskReady:(CDUnknownBlockType)arg1 forIndex:(unsigned long long)arg2;
- (void)performStateWork:(CDUnknownBlockType)arg1;

@end
