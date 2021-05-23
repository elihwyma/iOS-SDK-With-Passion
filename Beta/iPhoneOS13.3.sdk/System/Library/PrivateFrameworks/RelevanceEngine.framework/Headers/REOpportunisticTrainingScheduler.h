/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETrainingScheduler.h>

@class NSMutableArray, NSObject;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface REOpportunisticTrainingScheduler : RETrainingScheduler

{
    NSObject<OS_xpc_object> *_criteria;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    _Bool _scheduled;
}

- (id)init;
- (void)dealloc;
- (void)performTask:(CDUnknownBlockType)arg1;
- (void)cancelPendindTasks;
- (void)_queue_unschedule;
- (void)_performAllTasks;

@end
