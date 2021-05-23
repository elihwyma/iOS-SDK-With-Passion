/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource

{
    SKScene *_scene;
    double _lastUpdate;
}

@property (retain, nonatomic) SKScene *scene;

- (void)dealloc;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)__renderSKScene:(id)arg1 withSKSCNRenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime: /* Error: Ran out of types for this method. */;
- (double)__updateTextureWithSKScene:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3;

@end
