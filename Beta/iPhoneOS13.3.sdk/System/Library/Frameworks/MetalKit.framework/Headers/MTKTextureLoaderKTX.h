/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderKTX : MTKTextureLoaderData

{
    NSData *_imageData;
    struct MTLPixelFormatInfo _pixelFormatInfo;
    _Bool _packedRowStride;
}

+ (_Bool)isKTXFile:(id)arg1;

- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (_Bool)parseKeyValueBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)parseKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (unsigned long long)determineFormatFromSizedFormat:(unsigned long long)arg1;

@end
