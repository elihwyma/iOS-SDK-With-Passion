/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MCJobQueueObserver, OS_dispatch_group, OS_dispatch_queue;

@interface MCJobQueue : NSObject

{
    unsigned int _nextJobSequenceNumber;
    NSObject<OS_dispatch_queue> *_executionQueue;
    id <MCJobQueueObserver> _observer;
    NSObject<OS_dispatch_queue> *_jobQueue;
    NSObject<OS_dispatch_group> *_jobGroup;
    NSString *_queueID;
    CDUnknownBlockType _executionQueueAbortCompletionBlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *jobGroup;
@property (retain, nonatomic) NSString *queueID;
@property unsigned int nextJobSequenceNumber;
@property (copy, nonatomic) CDUnknownBlockType executionQueueAbortCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (weak, nonatomic) id <MCJobQueueObserver> observer;

- (id)init;
- (void)dealloc;
- (void)fromFunction:(const char *)arg1 enqueueJob:(CDUnknownBlockType)arg2;
- (void)jobDidFinishFromFunction:(const char *)arg1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(CDUnknownBlockType)arg1;
- (void)abortEnqueuedJobsCompletionBlock:(CDUnknownBlockType)arg1;

@end
