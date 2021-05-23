/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureSource.h>

@class AVPlayer, AVPlayerItemVideoOutput;

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNAVPlayerSource : SCNTextureSource

{
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id <MTLTexture> _mtlTexture;
    unsigned long long _texturePixelFormat;
    unsigned long long _width;
    unsigned long long _height;
}

@property (retain, nonatomic) AVPlayer *player;

- (id)init;
- (void)dealloc;
- (void)registerPlayer:(id)arg1;
- (void)unregisterPlayer:(id)arg1;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
- (void)discardVideoData;

@end
