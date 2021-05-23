/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@interface TSUColor : NSObject <Swift>

{
    struct CGColor *mCGColor;
}

@property (readonly) struct CGColor *CGColor;

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
+ (id)colorWithPatternImage:(id)arg1;
+ (id)brownColor;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)lightGrayColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)randomColor;
+ (id)colorWithRGBAComponents:(const double *)arg1;
+ (id)colorWithPlatformColor:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (_Bool)isOpaque;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)alphaComponent;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (double)redComponent;
- (double)greenComponent;
- (double)blueComponent;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (double)luminance;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (id)UIColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)grayscaleColor;
- (id)invertedColor;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)isNearlyWhite;
- (_Bool)isAlmostEqualToColor:(id)arg1;
- (void)getRGBAComponents:(double *)arg1;
- (id)platformColor;
- (id)initWithPlatformColor:(id)arg1;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (_Bool)isGrayscaleColor;
- (id)lightenedColorByFactor:(double)arg1;
- (id)darkenedColorByFactor:(double)arg1;

@end
