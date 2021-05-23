/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent

{
    unsigned long long _blurSize;
    unsigned long long _softenSize;
    short _angle;
    unsigned long long _altitude;
    unsigned int _direction;
    int _highlightBlendMode;
    CUIColor *_highlightColor;
    double _highlightOpacity;
    int _shadowBlendMode;
    CUIColor *_shadowColor;
    double _shadowOpacity;
}

@property unsigned long long blurSize;
@property unsigned long long softenSize;
@property short angle;
@property unsigned long long altitude;
@property unsigned int direction;
@property int highlightBlendMode;
@property (retain) CUIColor *highlightColor;
@property double highlightOpacity;
@property int shadowBlendMode;
@property (retain) CUIColor *shadowColor;
@property double shadowOpacity;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)effectType;

@end
