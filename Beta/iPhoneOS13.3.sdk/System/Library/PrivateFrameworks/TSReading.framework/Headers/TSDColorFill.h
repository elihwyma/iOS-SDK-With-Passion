/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDFill.h>

#import <TSReading/Swift-Protocol.h>

@class TSUColor;

@interface TSDColorFill : TSDFill <Swift>

{
    TSUColor *mColor;
}

@property (nonatomic, readonly) struct CGColor *CGColor;
@property (copy, nonatomic, readonly) TSUColor *color;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) double saturation;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) double luminance;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)redColor;
+ (id)greenColor;
+ (id)blueColor;
+ (id)cyanColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)clearColor;
+ (id)brownColor;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)randomColor;
+ (id)colorWithColor:(id)arg1;
+ (id)keyPathsForValuesAffectingCGColor;
+ (id)keyPathsForValuesAffectingOpacity;
+ (id)keyPathsForValuesAffectingLuminance;
+ (id)keyPathsForValuesAffectingHue;
+ (id)keyPathsForValuesAffectingSaturation;
+ (id)keyPathsForValuesAffectingBrightness;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (_Bool)isOpaque;
- (id)initWithColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithUIColor:(id)arg1;
- (id)referenceColor;
- (id)UIColor;
- (SEL)mapThemeAssetSelector;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)grayscaleColor;
- (id)invertedColor;
- (int)fillType;
- (_Bool)isNearlyWhite;
- (_Bool)canApplyToCAShapeLayer;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (_Bool)drawsInOneStep;
- (_Bool)isClear;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyToCALayer;
- (double)p_hsbComponentWithIndex:(unsigned long long)arg1;

@end
