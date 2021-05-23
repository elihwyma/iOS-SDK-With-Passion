/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@protocol MPSHeapProvider, MTLCommandBuffer;

@interface MPSCommandBufferImageCache : NSObject

{
    struct MPSDevice *_device;
    id <MTLCommandBuffer> _cmdBuffer;
    long long _debugMode;
    struct HeapNode *_freeList[65];
    struct CacheFrame *_frameList;
    struct ResourceNode *_retainedResources;
    struct MPSAutoCache *_userCacheFrame;
    unsigned long long _minimumBin;
    unsigned long long _batchSize;
    _Bool _needsRetain;
    unsigned long long _totalAllocationBytes;
    unsigned long long _cacheDelay;
    struct atomic<long> _commandBufferCount;
    id <MPSHeapProvider> _heapProvider;
    _Bool _isMPSCommandBuffer;
}

@property (nonatomic, readonly) id <MTLCommandBuffer> commandBuffer;
@property (nonatomic) unsigned long long batchSizeHint;
@property (retain, nonatomic) id <MPSHeapProvider> heapProvider;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithCommandBuffer:(id)arg1;
- (void)addHandlerToCommandBuffer:(id)arg1;
- (id)newHeapBlock:(unsigned long long)arg1;
- (void)releaseHeapBlock:(id)arg1 heapProvider:(id)arg2;

@end
