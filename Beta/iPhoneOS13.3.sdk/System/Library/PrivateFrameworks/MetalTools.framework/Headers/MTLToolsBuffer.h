/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsResource.h>

@class MTLToolsPointerArray, NSString;

@protocol MTLDevice, MTLHeap;

@interface MTLToolsBuffer : MTLToolsResource

{
    MTLToolsPointerArray *_textures;
}

@property (nonatomic, readonly) MTLToolsPointerArray *textures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id <MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long length;

- (void)dealloc;
- (void *)contents;
- (struct __IOSurface *)iosurface;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeAllDebugMarkers;
- (void)didModifyRange:(struct _NSRange)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

@end
