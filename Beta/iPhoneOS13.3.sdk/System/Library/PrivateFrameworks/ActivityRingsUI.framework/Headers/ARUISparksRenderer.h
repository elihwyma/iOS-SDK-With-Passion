/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUIAngularSparksComputeState, ARUIAngularSparksRenderState, ARUIKineticSparksComputeState, ARUIKineticSparksParticleRenderState, NSString;

@protocol ARUIBlurRendering, ARUICompositeRendering, MTLBuffer, MTLDevice, MTLLibrary, MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISparksRenderer : NSObject

{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    _Bool _prewarmed;
    id <MTLBuffer> _quadVertexBuffer;
    id <MTLBuffer> _quadIndexBuffer;
    unsigned long long _quadIndexCount;
    id <MTLTexture> _particleTexture;
    ARUIAngularSparksComputeState *_angularSparksComputeState;
    ARUIKineticSparksComputeState *_kineticSparksComputeState;
    ARUIAngularSparksRenderState *_angularSparksRenderState;
    ARUIKineticSparksParticleRenderState *_kineticSparksRenderState;
    id <ARUICompositeRendering> _compositeRenderer;
    id <ARUIBlurRendering> _blurRenderer;
}

@property (weak, nonatomic) id <ARUICompositeRendering> compositeRenderer;
@property (weak, nonatomic) id <ARUIBlurRendering> blurRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prewarm;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3;
- (id)_particlesTextureWithCommandBuffer:(id)arg1 sparksMap:(id)arg2 uniformType:(unsigned long long)arg3 size: /* Error: Ran out of types for this method. */;
- (long long)_largeBlurRadiusForSize:(float)arg1;
- (long long)_smallBlurRadiusForSize:(float)arg1;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3 uniformsType:(unsigned long long)arg4;
- (id)sparksTextureWithCommandBuffer:(id)arg1 sparksMap:(id)arg2 size: /* Error: Ran out of types for this method. */;

@end
