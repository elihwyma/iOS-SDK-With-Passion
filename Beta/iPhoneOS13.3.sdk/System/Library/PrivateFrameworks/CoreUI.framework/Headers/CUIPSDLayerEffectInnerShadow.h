/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent

{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    short _angle;
    unsigned long long _distance;
    unsigned long long _blurSize;
}

@property int blendMode;
@property double opacity;
@property (retain) CUIColor *color;
@property short angle;
@property unsigned long long distance;
@property unsigned long long blurSize;

- (id)init;
- (void)dealloc;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)effectType;

@end
