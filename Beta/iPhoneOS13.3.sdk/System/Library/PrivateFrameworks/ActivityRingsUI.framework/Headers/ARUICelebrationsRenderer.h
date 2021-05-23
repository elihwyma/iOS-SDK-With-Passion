/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUICompositingRenderState, ARUIDownsampleRenderState, ARUIHorizontalBlurRenderState, ARUISparksRenderer, ARUIVerticalBlurRenderState, ARUIWavesRenderer, NSString;

@protocol ARUIRingsRendering, MTLBuffer, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUICelebrationsRenderer : NSObject

{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    ARUISparksRenderer *_sparksRenderer;
    ARUIWavesRenderer *_wavesRenderer;
    ARUICompositingRenderState *_compositingRenderState;
    ARUIHorizontalBlurRenderState *_horizontalBlurRenderState;
    ARUIVerticalBlurRenderState *_verticalBlurRenderState;
    ARUIDownsampleRenderState *_downsampleRenderState;
    id <MTLBuffer> _quadVertexBuffer;
    id <MTLBuffer> _quadIndexBuffer;
    unsigned long long _quadIndexCount;
    id <ARUIRingsRendering> _ringsRenderer;
}

@property (weak, nonatomic) id <ARUIRingsRendering> ringsRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)celebrationsTextureWithCommandBuffer:(id)arg1 forRingGroupControllers:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (void)compositeWithCommandEncoder:(id)arg1 texture:(id)arg2;
- (void)prewarmCelebrationPipelineForType:(unsigned long long)arg1;
- (void)prewarmBlurRenderPipeline;
- (void)prewarmCompositeRenderPipeline;
- (id)gaussianBlurredTexture:(id)arg1 withCommandBuffer:(id)arg2 andSize:(unsigned long long)arg3 blurRadius:(float)arg4 initialDownsampleFraction:(float)arg5 brightnessMultiplier: /* Error: Ran out of types for this method. */;
- (id)compositeTexturesWithCommandBuffer:(id)arg1 textures:(id)arg2 andSize: /* Error: Ran out of types for this method. */;
- (void)_prewarmQuadBuffers;
- (void)compositeWithCommandEncoder:(id)arg1 textures:(id)arg2;
- (id)_downsampledTexture:(id)arg1 withCommandBuffer:(id)arg2 andSize: /* Error: Ran out of types for this method. */;

@end
