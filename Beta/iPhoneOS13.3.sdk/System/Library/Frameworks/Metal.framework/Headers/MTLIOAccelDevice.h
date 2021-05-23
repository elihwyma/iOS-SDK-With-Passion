/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLDevice.h>

@class MTLIOAccelDeviceShmemPool, MTLIOMemoryInfo, MTLResourceListPool, NSObject;

@protocol MTLDeviceSPI, OS_dispatch_queue, OS_dispatch_source;

@interface MTLIOAccelDevice : _MTLDevice

{
    struct __IOAccelDevice *_deviceRef;
    struct __IOAccelShared *_sharedRef;
    unsigned int _acceleratorPort;
    struct {
        MTLIOAccelDeviceShmemPool *segmentListShmemPool;
        MTLIOAccelDeviceShmemPool *kernelCommandShmemPool;
        id *hwResourcePools;
        unsigned int hwResourcePoolCount;
        MTLResourceListPool *akResourceListPool;
        MTLResourceListPool *akPrivateResourceListPool;
    } _storageCreateParams;
    struct MTLIOAccelCommandBufferStoragePool *_commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
    unsigned long long _sharedMemorySize;
    unsigned int _accelID;
    int _numCommandBuffers;
    unsigned long long _segmentByteThreshold;
    struct MTLIOAccelBufferHeap _bufferHeaps[16];
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    NSObject<OS_dispatch_queue> *_device_pool_cleanup_queue;
    NSObject<OS_dispatch_source> *_device_pool_cleanup_source;
    _Bool _device_pool_cleanup_scheduled;
    unsigned int _fenceAllocatedCount;
    unsigned int _fenceMaximumCount;
    unsigned int _fenceBitmapSearchStart;
    unsigned int _fenceBitmapCount;
    unsigned long long *_fenceAllocationBitmap;
    unsigned long long _registryID;
    id <MTLDeviceSPI> _deviceWrapper;
}

@property (readonly) id *hwResourcePools;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) int numCommandBuffers;
@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (readonly) _Bool hasUnifiedMemory;
@property (readonly) _Bool supportsVertexAmplification;
@property (readonly) _Bool supportPriorityBand;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) MTLIOMemoryInfo *memoryInfo;

+ (void)registerDevices;
+ (void)registerService:(unsigned int)arg1;

- (void)dealloc;
- (unsigned long long)maxBufferLength;
- (struct __IOAccelDevice *)deviceRef;
- (id)newFence;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newEvent;
- (_Bool)supportsVertexAmplificationCount:(unsigned long long)arg1;
- (void)_setDeviceWrapper:(id)arg1;
- (id)_deviceWrapper;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (_Bool)setResourcesPurgeableState:(id *)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long *)arg3 count:(int)arg4;
- (id)indirectArgumentBufferDecodingData;
- (void)setIndirectArgumentBufferDecodingData:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (struct __IOAccelShared *)sharedRef;
- (void)_purgeDevice;
- (void)releaseFenceIndex:(unsigned int)arg1;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (void)updateResourcePoolPurgeability;
- (short)heapIndexWithOptions:(unsigned long long)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id *)arg1 count:(int)arg2;
- (id)akResourceListPool;
- (id)akPrivateResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short *)arg4 bufferIndex:(short *)arg5 bufferOffset:(unsigned long long *)arg6;
- (void)_addResource:(id)arg1;
- (void)_removeResource:(id)arg1;
- (void)kickCleanupQueue;

@end
