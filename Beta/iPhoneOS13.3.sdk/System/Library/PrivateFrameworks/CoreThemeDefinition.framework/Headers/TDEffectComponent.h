/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, TDEffectRenditionSpec, TDEffectType;

@interface TDEffectComponent : NSManagedObject

@property (retain, nonatomic) TDEffectRenditionSpec *rendition;
@property (retain, nonatomic) NSSet *parameters;
@property (retain, nonatomic) TDEffectType *effectType;
@property (nonatomic) _Bool isEnabled;

+ (id)keyPathsForValuesAffectingCUIEffectParameterColor1;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlurSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOffset;
+ (id)keyPathsForValuesAffectingCUIEffectParameterAngle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlendMode;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSoftenSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSpread;
+ (id)keyPathsForValuesAffectingCUIEffectParameterTintable;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBevelStyle;

- (id)parameterOfType:(unsigned int)arg1;
- (void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned long long)arg2 withDocument:(id)arg3;
- (void)updatePresetParameters:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addParametersToPreset:(id)arg1;
- (id)CUIEffectParameterColor1;
- (id)CUIEffectParameterColor2;
- (id)CUIEffectParameterOpacity;
- (id)CUIEffectParameterOpacity2;
- (id)CUIEffectParameterBlurSize;
- (id)CUIEffectParameterOffset;
- (id)CUIEffectParameterAngle;
- (id)CUIEffectParameterBlendMode;
- (id)CUIEffectParameterSoftenSize;
- (id)CUIEffectParameterSpread;
- (id)CUIEffectParameterTintable;
- (id)CUIEffectParameterBevelStyle;

@end
