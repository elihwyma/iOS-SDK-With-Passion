/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent

{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    unsigned long long _blurSize;
    unsigned long long _spread;
}

@property int blendMode;
@property double opacity;
@property (retain) CUIColor *color;
@property unsigned long long blurSize;
@property unsigned long long spread;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)effectType;

@end
