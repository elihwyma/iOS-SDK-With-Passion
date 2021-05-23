/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLToolsPointerArray, NSObject, NSString;

@protocol MTLDevice, OS_dispatch_queue;

@interface MTLToolsCommandQueue : MTLToolsObject

{
    MTLToolsPointerArray *_commandBuffers;
}

@property (nonatomic, readonly) MTLToolsPointerArray *commandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) _Bool commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool skipRender;
@property _Bool executionEnabled;
@property _Bool isOpenGLQueue;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;

- (void)dealloc;
- (void)finish;
- (id)commandBuffer;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (_Bool)setGPUPriority:(unsigned long long)arg1;
- (id)commandBufferWithUnretainedReferences;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)setCompletionQueue:(id)arg1;
- (void)setSubmissionQueue:(id)arg1;
- (void)insertDebugCaptureBoundary;
- (unsigned long long)getGPUPriority;
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (unsigned long long)getBackgroundGPUPriority;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (id)availableCounters;
- (int)requestCounters:(id)arg1;
- (id)getRequestedCounters;
- (id)subdivideCounterList:(id)arg1;
- (id)counterInfo;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

@end
