/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureSource.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SCNTextureOffscreenRenderingSource : SCNTextureSource

{
    _Bool _usesIOSurface;
    struct CGSize _framebufferSize;
    struct __C3DFramebuffer *_framebuffer;
}

- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 textureSampler:(struct __C3DTextureSampler *)arg3 needsStencil:(_Bool)arg4;
- (MISSING_TYPE *)textureSize;
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;

@end
