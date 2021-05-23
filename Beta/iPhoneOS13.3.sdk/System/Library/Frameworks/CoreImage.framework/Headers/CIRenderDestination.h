/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIBlendKernel;

@interface CIRenderDestination : NSObject

{
    void *_priv;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property unsigned long long alphaMode;
@property (getter=isFlipped) _Bool flipped;
@property (getter=isDithered) _Bool dithered;
@property (getter=isClamped) _Bool clamped;
@property (nonatomic) struct CGColorSpace *colorSpace;
@property (retain, nonatomic) CIBlendKernel *blendKernel;
@property _Bool blendsInDestinationColorSpace;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (int)format;
- (struct CIRenderDestinationInternal *)_internalRepresentation;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithIOSurface:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)initWithBitmapData:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(CDUnknownBlockType)arg5;
- (id)label;
- (struct RenderDestination *)_internalRenderDestination;
- (id)_initWithInternalRenderDestination:(struct RenderDestination *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(struct CGColorSpace *)arg5;
- (void)_set_YCC_matrix:(int)arg1 fullRange:(_Bool)arg2 deep:(_Bool)arg3;
- (struct RenderTask *)_render:(struct Image *)arg1 withContext:(struct Context *)arg2;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelBufferProvider:(CDUnknownBlockType)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace *)arg4 surfaceProvider:(CDUnknownBlockType)arg5;
- (int)ditherDepth;
- (id)imageRepresentation;

@end
