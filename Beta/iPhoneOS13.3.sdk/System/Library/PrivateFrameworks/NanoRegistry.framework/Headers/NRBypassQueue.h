/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NRBypassQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_suspendableQueue;
    NSObject<OS_dispatch_queue> *_bypassQueue;
    _Bool _suspended;
    struct os_unfair_lock_s _lock;
}

- (id)init;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)assertOnQueue;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (void)enqueueBlockAsync:(CDUnknownBlockType)arg1;
- (void)enqueueBypassBlock:(CDUnknownBlockType)arg1;
- (void)enqueueBypassBlockAsync:(CDUnknownBlockType)arg1;

@end
