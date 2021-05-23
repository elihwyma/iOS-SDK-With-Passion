/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIImage, CUIShapeEffectPreset, NSDictionary;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition

{
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}

- (void)dealloc;
- (id)effectPreset;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (void)_initializeCoreUIOptions:(id)arg1;
- (id)referenceImage;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (id)coreUIOptions;
- (_Bool)_generateReferenceImage;
- (id)_rendererInitializationDictionary;

@end
