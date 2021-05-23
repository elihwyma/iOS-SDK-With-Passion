/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLToolsPointerArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString;

@protocol MTLCommandQueue, MTLDevice;

@interface MTLToolsCommandBuffer : MTLToolsObject

{
    struct {
        unsigned int hasCommit:1;
        unsigned int addedCompletedHandler:1;
        unsigned int addedScheduledHandler:1;
        unsigned int padding:29;
    } _flags;
    NSMutableSet *_retainedObjects;
    MTLToolsPointerArray *_renderCommandEncoders;
    MTLToolsPointerArray *_computeCommandEncoders;
    MTLToolsPointerArray *_blitCommandEncoders;
    MTLToolsPointerArray *_parallelRenderCommandEncoders;
    MTLToolsPointerArray *_fragmentRenderCommandEncoders;
    MTLToolsPointerArray *_resourceStateCommandEncoders;
    struct ILayerLockingPolicy *_retainedObjectsLock;
}

@property (nonatomic) struct ILayerLockingPolicy *retainedObjectsLock;
@property (nonatomic, readonly) NSMutableSet *retainedObjects;
@property (nonatomic, readonly) MTLToolsPointerArray *renderCommandEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *computeCommandEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *blitCommandEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *parallelRenderCommandEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *fragmentRenderCommandEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *resourceStateCommandEncoders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (readonly) id <MTLCommandQueue> commandQueue;
@property (readonly) _Bool retainedReferences;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;
@property (readonly) unsigned long long globalTraceObjectID;

- (void)dealloc;
- (id)computeCommandEncoder;
- (void)commit;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (id)blitCommandEncoder;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)presentDrawable:(id)arg1;
- (void)waitUntilScheduled;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)enqueue;
- (_Bool)commitAndWaitUntilSubmitted;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)protectionOptions;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)resourceStateCommandEncoder;
- (void)addPurgedResource:(id)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)debugCommandEncoder;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;
- (void)addSynchronizationNotification:(CDUnknownBlockType)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)addRetainedObject:(id)arg1;
- (void)preScheduledHandlers;
- (void)preCompletionHandlers;
- (void)clearRetainedObjects;
- (void)postScheduledHandlers;
- (void)postCompletionHandlers;
- (void)preCommit;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (void)willEncodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 writeableResources:(id)arg3;

@end
