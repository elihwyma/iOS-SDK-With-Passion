/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/Swift-Protocol.h>

@protocol MTLBuffer, MTLResource, MTLTexture;

@protocol MTLTexture <Swift>

@property (readonly) id <MTLResource> rootResource;
@property (readonly) id <MTLTexture> parentTexture;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) id <MTLBuffer> buffer;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long bufferBytesPerRow;
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
@property (nonatomic, readonly) struct swizzle;

- (unsigned short)replaceRegion:mipmapLevel:withBytes:bytesPerRow: /* Error: Ran out of types for this method. */;
- (unsigned short)getBytes:bytesPerRow:fromRegion:mipmapLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)newTextureViewWithPixelFormat:textureType:levels:slices: /* Error: Ran out of types for this method. */;
- (unsigned short)newTextureViewWithPixelFormat: /* Error: Ran out of types for this method. */;
- (unsigned short)getBytes:bytesPerRow:bytesPerImage:fromRegion:mipmapLevel:slice: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceRegion:mipmapLevel:slice:withBytes:bytesPerRow:bytesPerImage: /* Error: Ran out of types for this method. */;
- (unsigned short)newSharedTextureHandle;
- (unsigned short)newTextureViewWithPixelFormat:textureType:levels:slices:swizzle: /* Error: Ran out of types for this method. */;

@end
