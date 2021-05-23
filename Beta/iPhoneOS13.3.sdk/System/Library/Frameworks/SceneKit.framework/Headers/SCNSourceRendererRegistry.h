/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNSourceRendererRegistry : NSObject

{
    struct __CFDictionary *_registry;
}

+ (id)sharedRegistry;

- (id)init;
- (void)dealloc;
- (void)rendererDidChange:(id)arg1;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4;
- (void)endFrameForEngineContext:(struct __C3DEngineContext *)arg1;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg1;
- (void)removeSourceRenderersForSource:(id)arg1;

@end
