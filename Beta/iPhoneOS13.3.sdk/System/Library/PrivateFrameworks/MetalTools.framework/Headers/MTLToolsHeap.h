/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsResource.h>

@class MTLToolsPointerArray, NSString;

@protocol MTLDevice;

@interface MTLToolsHeap : MTLToolsResource

{
    MTLToolsPointerArray *_buffers;
    MTLToolsPointerArray *_textures;
}

@property (nonatomic, readonly) MTLToolsPointerArray *buffers;
@property (nonatomic, readonly) MTLToolsPointerArray *textures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) long long type;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (void)dealloc;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (void)acceptVisitor:(id)arg1;
- (id)_wrapBuffer:(id)arg1;
- (id)_wrapTexture:(id)arg1;

@end
