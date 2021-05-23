/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsBuffer.h>

@class MTLDebugDevice, MTLDebugResource, MTLDebugResourceAccessTracker, MTLIndirectCommandBufferDescriptor, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer

{
    MTLDebugResource *_common;
    unsigned long long _length;
    MTLDebugResourceAccessTracker *_resourceAccessTracker;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    _Bool _purgeableStateHasBeenSet;
    _Bool _isContentsPointerExposed;
    _Bool _isContentExposedToCPU;
    unsigned int _maxIndirectCommandCount;
    unsigned int _checksum;
    const void *_pointer;
    unsigned long long _purgeableState;
    MTLIndirectCommandBufferDescriptor *_indirectCommandBufferDescriptor;
}

@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly) const void *pointer;
@property (nonatomic, readonly) unsigned long long purgeableState;
@property (nonatomic, readonly) _Bool purgeableStateHasBeenSet;
@property (nonatomic, readonly) _Bool resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;
@property (nonatomic, readonly) MTLIndirectCommandBufferDescriptor *indirectCommandBufferDescriptor;
@property (nonatomic, readonly) unsigned int maxIndirectCommandCount;
@property (nonatomic, readonly) _Bool isContentsPointerExposed;
@property (nonatomic) unsigned int checksum;
@property (nonatomic) _Bool isContentExposedToCPU;

- (void)dealloc;
- (unsigned long long)length;
- (id)description;
- (void *)contents;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (id)heap;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (void)makeAliasable;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeAllDebugMarkers;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void)accessedByGPU;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (void)accessedByCPU;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCount:(unsigned long long)arg3 device:(id)arg4 options:(unsigned long long)arg5;
- (id)copyDebugMarkers;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;

@end
