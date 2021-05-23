/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface OITSUColor : NSObject <Swift>

{
    struct CGColor *mCGColor;
    unsigned long long mColorRGBSpace;
}

@property (readonly) double whiteComponent;
@property (readonly) double cyanComponent;
@property (readonly) double magentaComponent;
@property (readonly) double yellowComponent;
@property (readonly) double blackComponent;
@property (readonly) struct CGColorSpace *CGColorSpace;
@property (readonly) int CGColorSpaceModel;
@property (readonly) struct CGColor *CGColor;
@property (nonatomic, readonly) unsigned long long colorRGBSpace;
@property (nonatomic, readonly) double blueComponent;
@property (nonatomic, readonly) double redComponent;
@property (nonatomic, readonly) double greenComponent;
@property (nonatomic, readonly) double alphaComponent;
@property (nonatomic, readonly) UIColor *UIColor;

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
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)lightGrayColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)stringForColor:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithUIColor:(id)arg1;
+ (id)randomColor;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDeviceWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithDeviceHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDeviceRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDeviceCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5;
+ (id)colorWithCatalogName:(id)arg1 colorName:(id)arg2;
+ (id)colorWithBGR:(unsigned int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithCsColour:(const struct CsColour *)arg1;
+ (id)colorWithEshColor:(const struct EshColor *)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (id)colorWithBGRValue:(long long)arg1;
+ (id)colorWithRGBValue:(long long)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)set;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (_Bool)isOpaque;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)getWhite:(double *)arg1 alpha:(double *)arg2;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (double)luminance;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (id)initWithHexString:(id)arg1;
- (id)hexString;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)grayscaleColor;
- (id)invertedColor;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)isNearlyWhite;
- (_Bool)isAlmostEqualToColor:(id)arg1;
- (void)getRGBAComponents:(double *)arg1;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (_Bool)isBlack;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
- (id)initWithCGColor:(struct CGColor *)arg1 colorSpace:(unsigned long long)arg2;
- (_Bool)isEqualWithTolerance:(id)arg1;
- (_Bool)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (_Bool)wantsHighContrastBackgroundForDarkMode:(id)arg1;
- (double)p_cmykComponentWithIndex:(unsigned char)arg1;
- (CDStruct_a06f635e)ttColor;
- (id)newSolidColoredBitmap:(struct CGSize)arg1;
- (id)solidColoredPngImage;
- (void)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 black:(double *)arg4 alpha:(double *)arg5;
- (unsigned int)toBGR;
- (id)colorWithTintValue:(double)arg1;
- (id)colorWithShadeValue:(double)arg1;
- (struct CsColour)csColour;
- (struct EshColor)eshColor;
- (void)getRGBBytes:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;

@end
