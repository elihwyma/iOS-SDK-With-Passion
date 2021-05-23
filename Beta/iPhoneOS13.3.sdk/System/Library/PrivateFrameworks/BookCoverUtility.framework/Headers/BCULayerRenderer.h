/*
 Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

#import <NSObject.h>

@class CARenderer, NSHashTable;

@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

@interface BCULayerRenderer : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSHashTable *_operations;
    CARenderer *_renderer;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    _Bool _suspended;
}

- (id)init;
- (void)resume;
- (void)suspend;
- (void)_startOperation:(id)arg1;
- (id)initWithSuspended:(_Bool)arg1;
- (void)_processOperations;
- (void)_disconnectLayer:(id)arg1;
- (id)newOperationWithPriority:(float)arg1 waitForCPUSynchronization:(_Bool)arg2 renderLayer:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)newOperationWithPriority:(float)arg1 renderLayer:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
