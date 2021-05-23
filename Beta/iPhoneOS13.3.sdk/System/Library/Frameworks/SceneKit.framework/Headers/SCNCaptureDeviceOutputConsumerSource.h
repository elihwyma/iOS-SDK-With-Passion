/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureSource.h>

@class NSString;

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource

{
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id <MTLTexture> _mtlTexture;
    _Bool _containsAlpha;
    _Bool _isFront;
    unsigned long long _width;
    unsigned long long _height;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
- (void)discardVideoData;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)containsAlpha;

@end
