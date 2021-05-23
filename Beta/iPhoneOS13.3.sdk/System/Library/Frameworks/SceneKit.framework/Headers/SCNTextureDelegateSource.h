/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

__attribute__((visibility("hidden")))
@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource

{
    id _delegate;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)__updateTextureWithDelegate:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2;

@end
