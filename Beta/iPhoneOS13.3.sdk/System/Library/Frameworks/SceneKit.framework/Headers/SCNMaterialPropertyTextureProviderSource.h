/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureSource.h>

@class NSString;

@protocol MTLTexture, SCNMaterialPropertyTextureProvider;

__attribute__((visibility("hidden")))
@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource

{
    id <MTLTexture> _texture;
    struct __C3DEngineContext *_engineContext;
    id <SCNMaterialPropertyTextureProvider> _textureProvider;
}

@property (retain, nonatomic) id <SCNMaterialPropertyTextureProvider> textureProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (id)cachedTextureWithURL:(id)arg1 token:(id *)arg2;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;

@end
