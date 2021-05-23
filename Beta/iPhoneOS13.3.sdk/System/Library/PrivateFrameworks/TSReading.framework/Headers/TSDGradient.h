/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDFill.h>

#import <TSReading/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, TSUColor;

@interface TSDGradient : TSDFill <Swift>

{
    NSMutableArray *mStops;
    unsigned long long mType;
    double mOpacity;
    struct CGShading *mShadingRef;
    _Bool mIsAdvancedGradient;
}

@property (nonatomic) double opacity;
@property (nonatomic) _Bool isAdvancedGradient;
@property (retain, nonatomic, readonly) NSArray *gradientStops;
@property (nonatomic, readonly) TSUColor *firstColor;
@property (nonatomic, readonly) TSUColor *lastColor;
@property (nonatomic, readonly) unsigned long long gradientType;
@property (nonatomic, readonly) _Bool isOpaque;
@property (nonatomic, readonly) struct CGShading *shadingRef;
@property (nonatomic, readonly) _Bool hasAlpha;
@property (nonatomic, readonly) NSString *presetKind;

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (_Bool)useInflections;
+ (void)enableInflections;
+ (void)disableInflections;
+ (_Bool)useQuartzShadings;
+ (void)sortStopsArray:(id)arg1;
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)linearGradientWithGradientStops:(id)arg1;
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)radialGradientWithGradientStops:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)referenceColor;
- (id)stopAtIndex:(unsigned long long)arg1;
- (SEL)mapThemeAssetSelector;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)newColorAtFraction:(double)arg1;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (void)releaseShadingRef;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (_Bool)isAdvancedGradientIgnoringFlag;
- (id)stopBeforeFraction:(double)arg1;
- (id)stopAfterFraction:(double)arg1;
- (id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)p_insertGradientStop:(id)arg1;
- (_Bool)isEqualIgnoringTransform:(id)arg1;
- (void)colorComponents:(double *)arg1 atFraction:(double)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (struct CGAffineTransform)centeredRadialTransformInRect:(struct CGRect)arg1;
- (int)fillType;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (void)p_setAlpha:(struct CGContext *)arg1;
- (struct CGContext *)p_beginBitmapWrapperContextInContext:(struct CGContext *)arg1 returningIntegralBounds:(struct CGRect *)arg2;
- (void)p_endBitmapWrapperContext:(struct CGContext *)arg1 inContext:(struct CGContext *)arg2 withIntegralBounds:(struct CGRect)arg3;
- (void)p_setGradientStops:(id)arg1;
- (void)p_removeStop:(id)arg1;
- (id)p_removeStopAtIndex:(unsigned long long)arg1;
- (id)p_insertStopAtFraction:(double)arg1;
- (void)p_reverseStopOrder;
- (void)p_evenlyDistributeStops;
- (void)p_setGradientType:(unsigned long long)arg1;
- (void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;

@end
