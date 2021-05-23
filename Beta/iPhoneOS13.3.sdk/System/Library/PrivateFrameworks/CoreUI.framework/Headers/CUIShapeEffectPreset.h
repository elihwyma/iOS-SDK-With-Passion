/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@interface CUIShapeEffectPreset : NSObject

{
    CDStruct_c57d91d4 _parameterList[125];
    unsigned int _effectIndex[26];
    double _scaleFactor;
    float _minimumShadowSpread;
}

@property (nonatomic) double scaleFactor;
@property float minimumShadowSpread;

+ (unsigned int)cuiEffectBlendModeFromCGBlendMode:(int)arg1;
+ (id)requiredEffectParametersForEffectType:(unsigned int)arg1;
+ (int)cgBlendModeFromCUIEffectBlendMode:(unsigned int)arg1;

- (id)init;
- (id)debugDescription;
- (id)CUIEffectDataRepresentation;
- (id)initWithEffectScale:(double)arg1;
- (unsigned long long)effectCount;
- (unsigned int)effectTypeAtIndex:(unsigned long long)arg1;
- (id)layerEffectsRepresentation;
- (void)addDropShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8;
- (CDUnion_577fdfa6)valueForParameter:(unsigned int)arg1 inEffectAtIndex:(unsigned long long)arg2;
- (void)addInnerShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned int)arg8;
- (void)addInnerGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 blendMode:(unsigned int)arg6;
- (void)addOuterGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6;
- (void)addColorFillWithRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blendMode:(unsigned int)arg5 tintable:(_Bool)arg6;
- (void)addGradientFillWithTopColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 bottomColorRed:(unsigned int)arg4 green:(unsigned int)arg5 blue:(unsigned int)arg6 opacity:(double)arg7 blendMode:(unsigned int)arg8;
- (void)addBevelEmbossWithHighlightColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 shadowColorRed:(unsigned int)arg5 green:(unsigned int)arg6 blue:(unsigned int)arg7 opacity:(double)arg8 blur:(int)arg9 soften:(int)arg10 bevelStyle:(unsigned int)arg11;
- (void)_insertEffectTuple:(CDStruct_c57d91d4)arg1 atEffectIndex:(unsigned long long)arg2;
- (void)addValue:(CDUnion_577fdfa6)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3 atEffectIndex:(unsigned long long)arg4;
- (void)addValue:(CDUnion_577fdfa6)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)appendValue:(CDUnion_577fdfa6)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)addFloatValue:(double)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withNewEffectType:(unsigned int)arg5;
- (void)appendFloatValue:(double)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendEnumValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withEffectType:(unsigned int)arg5;
- (void)appendIntValue:(unsigned long long)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendAngleValue:(long long)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)addShapeOpacityWithOpacity:(double)arg1;
- (void)addOutputOpacityWithOpacity:(double)arg1;
- (void)addExtraShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8;
- (void)addHueSaturationWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 angle:(int)arg4 width:(int)arg5 tintable:(_Bool)arg6;
- (double)effectScale;
- (void)getEffectTuples:(struct **)arg1 count:(unsigned long long *)arg2 atEffectIndex:(unsigned long long)arg3;
- (void)addIntValue:(unsigned long long)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addEnumValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addEffectsFromPreset:(id)arg1;
- (unsigned long long)_parameterCount;
- (id)initWithConstantPreset:(const CDStruct_35a2250d *)arg1;

@end
