/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@interface CUIShapeEffectStack : NSObject

{
    float _shapeOpacity;
    float _outputOpacity;
    unsigned int _outputBlendMode;
    unsigned long long _hueSaturationCount;
    CDStruct_2844c7c7 *_hueSaturation;
    unsigned long long _colorOverlayCount;
    CDStruct_073a3662 *_colorOverlay;
    unsigned long long _innerGradientCount;
    CDStruct_bdea167c *_innerGradient;
    unsigned long long _innerGlowCount;
    CDStruct_3d979a67 *_innerGlow;
    unsigned long long _innerShadowCount;
    CDStruct_a5d4af33 *_innerShadow;
    unsigned long long _outerGlowCount;
    CDStruct_265c7ca9 *_outerGlow;
    unsigned long long _engraveShadowCount;
    CDStruct_ca46f23f *_engraveShadow;
    unsigned long long _extraShadowCount;
    CDStruct_ca46f23f *_extraShadow;
    unsigned long long _bevelEmbossCount;
    CDStruct_c78fd0c4 *_emboss;
    float _scalefactor;
    int _renderStrategy;
}

@property (nonatomic, readonly) float shapeOpacity;
@property (nonatomic, readonly) float outputOpacity;
@property (nonatomic, readonly) unsigned long long hueSaturationCount;
@property (nonatomic, readonly) CDStruct_2844c7c7 *hueSaturation;
@property (nonatomic) unsigned long long colorOverlayCount;
@property (nonatomic, readonly) CDStruct_073a3662 *colorOverlay;
@property (nonatomic) unsigned long long innerGradientCount;
@property (nonatomic, readonly) CDStruct_bdea167c *innerGradient;
@property (nonatomic) unsigned long long innerGlowCount;
@property (nonatomic, readonly) CDStruct_3d979a67 *innerGlow;
@property (nonatomic) unsigned long long innerShadowCount;
@property (nonatomic, readonly) CDStruct_a5d4af33 *innerShadow;
@property (nonatomic, readonly) unsigned long long outerGlowCount;
@property (nonatomic, readonly) CDStruct_265c7ca9 *outerGlow;
@property (nonatomic) unsigned long long engraveShadowCount;
@property (nonatomic, readonly) CDStruct_ca46f23f *engraveShadow;
@property (nonatomic, readonly) unsigned long long extraShadowCount;
@property (nonatomic, readonly) CDStruct_ca46f23f *extraShadow;
@property (nonatomic, readonly) unsigned long long bevelEmbossCount;
@property (nonatomic, readonly) CDStruct_c78fd0c4 *emboss;
@property (nonatomic, readonly) float scalefactor;
@property (nonatomic, readonly) int renderStrategy;
@property (readonly) unsigned int outputBlendMode;

+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)sharedCIContext;
+ (id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(struct CGPoint)arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(_Bool)arg21 hasOutsideShadowBlur:(_Bool)arg22;
+ (id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (id)innerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)adjustOpacity:(id)arg1 by:(float)arg2;
+ (id)blend:(id)arg1 over:(id)arg2 blendKind:(unsigned int)arg3;
+ (id)hueSaturationFrom:(id)arg1 withCenterAngle:(double)arg2 width:(double)arg3 tintRed:(float)arg4 tintGreen:(float)arg5 tintBlue:(float)arg6;
+ (id)gradientWithParameters:(CDStruct_bdea167c *)arg1 inRect:(struct CGRect)arg2;
+ (id)outerGlowFrom:(id)arg1 withSize:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)outerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 size:(unsigned int)arg3 spread:(unsigned int)arg4 red:(float)arg5 green:(float)arg6 blue:(float)arg7 opacity:(float)arg8;
+ (id)bevelEmbossFrom:(id)arg1 withSize:(unsigned int)arg2 soften:(unsigned int)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13 bevelStyle:(unsigned int)arg14;
+ (id)composite:(id)arg1 over:(id)arg2;
+ (id)composite:(id)arg1 into:(id)arg2;
+ (id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3;
+ (id)preferredCIContextOptions;
+ (id)offset:(id)arg1 by:(struct CGPoint)arg2;
+ (id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(struct CGPoint)arg3;
+ (id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3;
+ (id)composite:(id)arg1 outOf:(id)arg2;
+ (id)composite:(id)arg1 atop:(id)arg2;
+ (id)image:(id)arg1 withOpacity:(float)arg2;
+ (id)invert:(id)arg1;
+ (id)blur:(id)arg1 radius:(float)arg2;
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)rectangle:(struct CGRect)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
+ (id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5;
+ (struct CGColor *)newColorByAdjustingLightnessOfColor:(struct CGColor *)arg1 darker:(_Bool)arg2;

- (void)dealloc;
- (id)cacheKey;
- (id)effectPreset;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 cache:(_Bool)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2;
- (struct CGColor *)newColorByProcessingColor:(struct CGColor *)arg1;
- (id)initWithEffectPreset:(id)arg1;
- (_Bool)hasInnerGlow;
- (_Bool)hasInnerShadow;
- (_Bool)hasOuterGlow;
- (_Bool)hasBevelEmboss;
- (_Bool)hasHueSaturation;
- (_Bool)hasInnerGradient;
- (float)innerGradientOpacity;
- (_Bool)hasColorOverlay;
- (float)colorOverlayOpacity;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2 invertShadows:(_Bool)arg3;
- (struct CGRect)effectPaddingWithScale:(double)arg1;
- (int)cgBlendModeForOutputBlending;
- (_Bool)hasEngraveShadow;
- (void)scaleEffectParametersBy:(double)arg1;
- (_Bool)hasExtraShadow;
- (void)_updateRenderStrategyFromEffect:(unsigned int)arg1;
- (void)_cleanupEffectSettings;
- (_Bool)_precompositeColorOverlayInnerGradient;
- (void)_setShapeOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setOutputOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setColorFillAtIndex:(unsigned long long)arg1 FromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setInteriorGradientAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setInnerGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setInnerShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setOuterGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setEngraveShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setBevelEmbossAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setExtraShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setHueSaturationAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1 tintEffectColors:(_Bool)arg2;
- (_Bool)anyEffectAllowsTintSubstitution;
- (id)image:(id)arg1 withAdjustedOpacity:(float)arg2;
- (_Bool)hasEffects;
- (id)imageWithInteriorGradientFillOfImage:(id)arg1 effect:(CDStruct_bdea167c)arg2;
- (id)imageWithColorOverlayOfImage:(id)arg1 effect:(CDStruct_073a3662)arg2;
- (id)imageWithHueSaturationOfImage:(id)arg1 effect:(CDStruct_2844c7c7)arg2;
- (id)imageWithInnerGlowOfImage:(id)arg1 effect:(CDStruct_3d979a67)arg2;
- (id)imageWithInnerShadowOfImage:(id)arg1 effect:(CDStruct_a5d4af33)arg2;
- (id)imageWithBevelEmbossOfImage:(id)arg1 effect:(CDStruct_c78fd0c4)arg2;
- (id)imageWithOuterGlowOfImage:(id)arg1 effect:(CDStruct_265c7ca9)arg2;
- (id)imageWithEngraveShadowOfImage:(id)arg1 effect:(CDStruct_ca46f23f)arg2;
- (id)imageWithExtraShadowOfImage:(id)arg1 effect:(CDStruct_ca46f23f)arg2;
- (id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2;
- (void)_normalizeEffectParameters;
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1;
- (id)standardEffectCompositeWithShapeImage:(id)arg1 blendOntoImage:(_Bool)arg2;
- (id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(double)arg2 blendOntoImage:(_Bool)arg3;
- (struct CGImage *)_newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3 blendOverImage:(_Bool)arg4;
- (void)updateOutputBlendingWithInteriorFillHeuristic;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1;
- (void)scaleBrightnessOfEffectColorsByAmount:(double)arg1 onlyTintableColors:(_Bool)arg2;
- (void)adjustEffectColorsToTemperature:(int)arg1 onlyTintableColors:(_Bool)arg2;
- (CDStruct_3c058996)effectInsetsWithScale:(double)arg1;
- (id)processedImageFromImage:(id)arg1;
- (id)processedImageFromImage:(id)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (struct CGImage *)newFlattenedImageFromCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1;
- (id)processedImageFromShapePath:(struct CGPath *)arg1 inRect:(struct CGRect)arg2;
- (_Bool)expressableByColorFillCheckingOutputBlending:(_Bool)arg1;

@end
