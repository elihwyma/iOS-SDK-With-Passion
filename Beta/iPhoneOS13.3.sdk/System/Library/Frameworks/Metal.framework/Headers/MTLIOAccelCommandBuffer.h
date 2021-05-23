/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLCommandBuffer.h>

@class MTLIOAccelDevice, NSMutableSet, NSObject;

@protocol MTLDevice, OS_dispatch_semaphore;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer

{
    MTLIOAccelDevice<MTLDevice> *_device;
    struct MTLIOAccelCommandBufferStorage *_storage;
    unsigned long long *_submitToHardwareTimeStampPointer;
    unsigned long long _protectionOptions;
    void *_scheduledCallbackBlockPtr;
    void *_completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
    NSMutableSet *_purgedResources;
}

@property (readonly) struct MTLIOAccelCommandBufferResourceInfo *commandBufferResourceInfo;
@property (readonly) struct IOAccelResourceList *ioAccelResourceList;
@property (readonly) id <MTLDevice> device;
@property (readonly) struct MTLIOAccelCommandBufferStorage *commandBufferStorage;

- (void)dealloc;
- (void)setLabel:(id)arg1;
- (void)commit;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)validate;
- (unsigned long long)protectionOptions;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)addPurgedResource:(id)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2 synchronousDebugMode:(_Bool)arg3;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)kernelCommandCollectTimeStamp;
- (void)_encodePurgedResources;
- (void)commitAndReset;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)getCurrentKernelCommandBufferPointer:(void **)arg1 end:(void **)arg2;
- (void *)_reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)commitEncoder;
- (void)_debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2;
- (void)getCurrentKernelCommandBufferStart:(void **)arg1 current:(void **)arg2 end:(void **)arg3;
- (void)setCurrentKernelCommandBufferPointer:(void *)arg1;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (struct IOAccelSegmentListHeader *)getSegmentListHeader;
- (void)getSegmentListPointerStart:(void **)arg1 current:(void **)arg2 end:(void **)arg3;
- (void)setCurrentSegmentListPointer:(void *)arg1;
- (void)growSegmentList;
- (void)beginSegment:(void *)arg1;
- (void)endCurrentSegment;
- (id)akResourceList;
- (id)akPrivateResourceList;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)encodeSubmitSleepMS:(unsigned int)arg1;

@end
