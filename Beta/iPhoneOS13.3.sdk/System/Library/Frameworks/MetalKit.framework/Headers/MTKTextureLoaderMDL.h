/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <MetalKit/MTKTextureLoaderData.h>

@class MDLTexture;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderMDL : MTKTextureLoaderData

{
    MDLTexture *_texture;
    struct MTLPixelFormatInfo _pixelFormatInfo;
}

- (void)dealloc;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (_Bool)determineFormatFromChannelEncoding:(long long)arg1 channelCount:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithMDLTexture:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
