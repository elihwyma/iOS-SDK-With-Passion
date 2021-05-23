/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource

{
    CALayer *_layer;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize)arg2 updateLayer:(_Bool)arg3 updateTransform:(_Bool)arg4 caRenderer:(id)arg5;
- (float)clearValue;
- (double)__renderLayerUsingMetal:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (struct CGSize)layerSizeInPixels;
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 sampler:(struct __C3DTextureSampler *)arg4;
- (_Bool)supportsMetal;
- (_Bool)prefersGL3;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (double)layerContentsScaleFactor;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;

@end
