/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent

{
    CUIPSDGradient *_gradient;
}

@property (retain) CUIPSDGradient *gradient;

- (id)init;
- (void)dealloc;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)effectType;

@end
