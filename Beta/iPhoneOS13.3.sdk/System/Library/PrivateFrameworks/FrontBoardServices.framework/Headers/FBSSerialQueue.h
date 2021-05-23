/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FBSSerialQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    unsigned long long _enqueueID;
    unsigned long long _dequeueID;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource *_runLoopSource;
    _Bool _callingOut;
    NSObject<OS_dispatch_semaphore> *_synchronizingEnqueueSemaphore;
    unsigned long long _lastSynchronizingWorkspaceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queueWithMainRunLoopModes:(id)arg1;
+ (id)queueWithDispatchQueue:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)assertOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(CDUnknownBlockType)arg1 withHandoff:(id)arg2;
- (void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2;
- (_Bool)_hasNext;
- (_Bool)_performNext;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (void)_queue_performAsync:(CDUnknownBlockType)arg1;
- (_Bool)_queue_performNextIfPossible;
- (void)performAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_performNextFromRunLoopSource;

@end
