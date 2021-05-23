/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueue.h>

@class PFDispatchQueueExtensionManager, PFSerialQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue

{
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    unsigned long long _suspendCount;
}

- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)resume;
- (unsigned int)qualityOfService;
- (id)initWithQueue:(id)arg1;
- (void)suspend;
- (const char *)label;
- (void)setTargetQueue:(id)arg1;
- (void)removeAllQueuedBlocks;
- (void)removeAllQueuedBlocksAndWait;
- (id)_extensionManager;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (id)_extensionsForTargetingQueue;
- (void)addExtensions:(id)arg1;
- (id)wrappedQueue;
- (void)suspendRequests;
- (void)resumeRequests;
- (void)enableExtension:(id)arg1;
- (void)disableExtension:(id)arg1;
- (id)extensionMatching:(CDUnknownBlockType)arg1;
- (void)_invoke:(CDUnknownBlockType)arg1 extensionDataArray:(id)arg2;
- (void)_performAsyncNotify:(id)arg1 enqueueBlock:(CDUnknownBlockType)arg2;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;
- (void *)getSpecific:(void *)arg1;
- (id)_dispatchQueueForSetTargetQueue;
- (_Bool)assertOnQueue;
- (_Bool)assertQueueBarrier;
- (_Bool)assertNotOnQueue;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (_Bool)onQueue;

@end
