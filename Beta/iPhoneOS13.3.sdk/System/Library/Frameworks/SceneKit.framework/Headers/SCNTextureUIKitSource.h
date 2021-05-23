/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureCoreAnimationSource.h>

@class UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface SCNTextureUIKitSource : SCNTextureCoreAnimationSource

{
    _Bool _setup;
    _Bool _windowReady;
    id _source;
    UIWindow *_uiWindow;
    UIView *_uiView;
    struct CGSize _sizeCache;
    unsigned int _textureID;
    struct __C3DEngineContext *_engineContext;
    struct __C3DTextureSampler *_textureSampler;
}

@property (retain, nonatomic) UIView *uiView;
@property (retain, nonatomic) UIWindow *uiWindow;
@property (retain, nonatomic) id source;

- (void)dealloc;
- (id)layer;
- (void)setup;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (float)clearValue;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (struct CGSize)layerSizeInPixels;
- (_Bool)supportsMetal;
- (double)layerContentsScaleFactor;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)_layerTreeDidUpdate;

@end
