/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface SCNTextureSource : NSObject

{
    id _mtlTextureCache;
    id _glTextureCache;
    MISSING_TYPE *_size;
}

- (void)dealloc;
- (void)setSize: /* Error: Ran out of types for this method. */;
- (double)nextFrameTime;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DRendererContext *)rendererContextForTextureSourceWithEngineContext:(struct __C3DEngineContext *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (id)glTextureCache;
- (void)setGlTextureCache:(id)arg1;
- (_Bool)supportsMetal;
- (id)MTLTextureCache;
- (void)setMTLTextureCache:(id)arg1;
- (_Bool)prefersGL3;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (MISSING_TYPE *)textureSize;

@end
