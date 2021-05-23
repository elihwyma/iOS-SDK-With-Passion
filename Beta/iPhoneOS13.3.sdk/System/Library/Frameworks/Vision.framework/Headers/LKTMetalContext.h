/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface LKTMetalContext : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLLibrary> _library;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) id <MTLLibrary> library;

+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1;
+ (id)metalContextForDevice:(id)arg1 error:(id *)arg2;
+ (void)makeTextureCoherent:(id)arg1 texture:(id)arg2;

- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 error:(id *)arg4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize)arg3 plane:(unsigned long long)arg4 error:(id *)arg5;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 error:(id *)arg6;
- (unsigned long long)textureBytesPerRow:(unsigned long long)arg1 format:(unsigned long long)arg2;

@end
