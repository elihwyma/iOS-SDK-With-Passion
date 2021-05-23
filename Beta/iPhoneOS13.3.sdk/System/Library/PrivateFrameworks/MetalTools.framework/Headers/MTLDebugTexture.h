/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsTexture.h>

@class MTLDebugDevice, MTLDebugResource, MTLDebugResourceAccessTracker, MTLTextureDescriptor;

@interface MTLDebugTexture : MTLToolsTexture

{
    struct MTLPixelFormatInfo _pixelFormatInfo;
    MTLDebugResourceAccessTracker *_resourceAccessTracker;
    MTLDebugDevice *_debugDevice;
    unsigned long long _usageRequired;
    _Bool _purgeableStateHasBeenSet;
    _Bool _isLinearTexture;
    unsigned int _textureUsage;
    MTLDebugResource *_common;
    MTLTextureDescriptor *_descriptor;
    unsigned long long _offset;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
    unsigned long long _plane;
    unsigned long long _purgeableState;
}

@property (nonatomic, readonly) MTLDebugResource *common;
@property (copy, nonatomic, readonly) MTLTextureDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) unsigned long long bytesPerImage;
@property (nonatomic, readonly) unsigned long long plane;
@property (nonatomic, readonly) unsigned long long purgeableState;
@property (nonatomic, readonly) _Bool purgeableStateHasBeenSet;
@property (nonatomic, readonly) _Bool isLinearTexture;
@property (nonatomic, readonly) _Bool resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;
@property (nonatomic) unsigned int textureUsage;

- (void)dealloc;
- (id)description;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_1e3be3a8)arg3 mipmapLevel:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)heap;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (void)makeAliasable;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)accessedByGPU;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6 bytesPerImage:(unsigned long long)arg7;
- (void)accessedByCPU;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (_Bool)requireUsage:(unsigned long long)arg1;
- (id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange)arg6 slices:(struct _NSRange)arg7;
- (_Bool)_resourceHasMemory;

@end
