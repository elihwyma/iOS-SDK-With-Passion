/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NUJobPriorityQueue;

@protocol OS_dispatch_queue;

@interface NUJobQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_interactiveQueue;
    NUJobPriorityQueue *_initiatedQueue;
    long long _updateGroupLevel;
    long long _stage;
}

@property (readonly) long long stage;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)addJob:(id)arg1;
- (void)removeJob:(id)arg1;
- (void)_addJob:(id)arg1;
- (void)_removeJob:(id)arg1;
- (id)initWithStage:(long long)arg1;
- (void)addJobs:(id)arg1;
- (void)_addJobs:(id)arg1;
- (void)_incrementGroupLevel;
- (void)_decrementGroupLevel;
- (void)_startRunningIfNeeded;
- (void)finishedPriorityQueue:(id)arg1;
- (void)_finishedPriorityQueue:(id)arg1;

@end
