/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent

{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
}

@property int blendMode;
@property (retain) CUIColor *color;
@property double opacity;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)effectType;

@end
