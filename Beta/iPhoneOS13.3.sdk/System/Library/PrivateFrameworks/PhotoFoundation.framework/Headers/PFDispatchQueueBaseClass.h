/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueue.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface PFDispatchQueueBaseClass : PFDispatchQueue

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)description;
- (void)resume;
- (unsigned int)qualityOfService;
- (id)initWithQueue:(id)arg1;
- (void)suspend;
- (const char *)label;
- (void)setTargetQueue:(id)arg1;
- (id)_extensionManager;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (id)_extensionsForTargetingQueue;
- (id)extensionMatching:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;
- (void *)getSpecific:(void *)arg1;
- (id)_dispatchQueueForSetTargetQueue;
- (_Bool)assertOnQueue;
- (_Bool)assertQueueBarrier;
- (_Bool)assertNotOnQueue;

@end
