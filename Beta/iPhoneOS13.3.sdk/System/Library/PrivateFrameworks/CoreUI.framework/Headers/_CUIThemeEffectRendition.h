/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIShapeEffectPreset;

__attribute__((visibility("hidden")))
@interface _CUIThemeEffectRendition : CUIThemeRendition

{
    const struct _cuieffectdata *effectData;
    CUIShapeEffectPreset *_effectPreset;
    float _minimumShadowSpread;
}

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)effectPreset;
- (void)_setStructuredThemeStore:(id)arg1;

@end
