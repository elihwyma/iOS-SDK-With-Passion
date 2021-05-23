/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUIWavesComputeState, ARUIWavesRenderState, NSString;

@protocol ARUIBlurRendering, ARUICompositeRendering, ARUIRingsRendering, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUIWavesRenderer : NSObject

{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    _Bool _prewarmed;
    ARUIWavesComputeState *_wavesComputeState;
    ARUIWavesRenderState *_wavesRenderState;
    id <ARUICompositeRendering> _compositeRenderer;
    id <ARUIBlurRendering> _blurRenderer;
    id <ARUIRingsRendering> _ringsRenderer;
}

@property (weak, nonatomic) id <ARUICompositeRendering> compositeRenderer;
@property (weak, nonatomic) id <ARUIBlurRendering> blurRenderer;
@property (weak, nonatomic) id <ARUIRingsRendering> ringsRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prewarm;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (id)_wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (id)wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (float)_revealPercentFromWavesMap:(id)arg1;

@end
