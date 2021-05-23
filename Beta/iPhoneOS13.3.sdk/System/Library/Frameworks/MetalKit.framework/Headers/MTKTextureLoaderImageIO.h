/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderImageIO : MTKTextureLoaderData

{
    struct CGImageBlockSet *_blockSet;
    struct __CFData *_cfData;
    struct MTLPixelFormatInfo _pixelFormatInfo;
    unsigned long long _bytesPerRow;
    NSData *_imageData;
    _Bool _expandRGBToRGBA;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)decodeCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (_Bool)decodeCGImageImageProvider:(struct CGImage *)arg1 CGImageProvider:(struct CGImageProvider *)arg2 options:(id)arg3;
- (_Bool)decodeCGImageDataProvider:(struct CGImage *)arg1 options:(id)arg2;
- (_Bool)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned int)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorSpace:(struct CGColorSpace *)arg4 isOptimized:(_Bool)arg5 options:(id)arg6;

@end
