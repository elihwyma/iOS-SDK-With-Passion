/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsHeap.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap

{
    struct os_unfair_lock_s _historyLock;
    struct HeapHistoryEvent *_oldestEvent;
    struct HeapHistoryEvent *_latestEvent;
    MTLDebugDevice *_debugDevice;
}

@property (nonatomic) struct HeapHistoryEvent *oldestEvent;
@property (nonatomic) struct HeapHistoryEvent *latestEvent;
@property (nonatomic, readonly) MTLDebugDevice *debugDevice;

- (void)dealloc;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (void)removeResourceFromHistory:(id)arg1;
- (void)addResourceToHistory:(id)arg1 madeAliasable:(_Bool)arg2;
- (id)initWithHeap:(id)arg1 device:(id)arg2;
- (void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(_Bool)arg2 isIOSurface:(_Bool)arg3;
- (void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validatePixelFormatWithHeap:(unsigned long long)arg1;
- (void)validateOffset:(unsigned long long)arg1 withRequirements:(CDStruct_4bcfbbae)arg2;
- (void)accessHistoryEventsUsingBlock:(CDUnknownBlockType)arg1;

@end
