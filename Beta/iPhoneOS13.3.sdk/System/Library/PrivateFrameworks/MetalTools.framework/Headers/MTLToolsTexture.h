/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsResource.h>

@class MTLResourceAllocationInfo, MTLToolsPointerArray, NSString;

@protocol MTLBuffer, MTLDevice, MTLHeap, MTLResource, MTLTexture;

@interface MTLToolsTexture : MTLToolsResource

{
    MTLToolsPointerArray *_views;
    id <MTLTexture> _parentTexture;
    id <MTLBuffer> _buffer;
}

@property (nonatomic, readonly) MTLToolsPointerArray *views;
@property (readonly) id <MTLTexture> parentTexture;
@property (readonly) id <MTLBuffer> buffer;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long bufferBytesPerRow;
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
@property (readonly) id <MTLResource> rootResource;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) struct __IOSurface *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long depth;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long usage;
@property (readonly, getter=isShareable) _Bool shareable;
@property (readonly, getter=isFramebufferOnly) _Bool framebufferOnly;
@property (readonly) unsigned long long firstMipmapInTail;
@property (readonly) unsigned long long tailSizeInBytes;
@property (readonly) _Bool isSparse;
@property (readonly) _Bool allowGPUOptimizedContents;
@property (nonatomic, readonly) CDStruct_a06f635e swizzle;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long rotation;
@property (readonly) _Bool isCompressed;
@property (readonly) long long compressionFeedback;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned int swizzleKey;
@property (readonly) unsigned long long numFaces;
@property (readonly) _Bool isDrawable;
@property (readonly) unsigned long long sparseSurfaceDefaultValue;

- (void)dealloc;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_1e3be3a8)arg3 mipmapLevel:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newSharedTextureHandle;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(CDStruct_14f26992)arg3 size:(CDStruct_14f26992)arg4 toPixels:(void *)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
- (void)copyFromPixels:(const void *)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(CDStruct_14f26992)arg6 size:(CDStruct_14f26992)arg7;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (_Bool)canGenerateMipmapLevels;
- (void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2;
- (void)acceptVisitor:(id)arg1;
- (unsigned long long)tailSize;
- (id)realRootResource;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3;

@end
