/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface PILevelsFilter : CIFilter

{
    CIImage *_inputImage;
    NSNumber *_inputBlackSrcRGB;
    NSNumber *_inputBlackDstRGB;
    NSNumber *_inputShadowSrcRGB;
    NSNumber *_inputShadowDstRGB;
    NSNumber *_inputMidSrcRGB;
    NSNumber *_inputMidDstRGB;
    NSNumber *_inputHilightSrcRGB;
    NSNumber *_inputHilightDstRGB;
    NSNumber *_inputWhiteSrcRGB;
    NSNumber *_inputWhiteDstRGB;
    NSNumber *_inputBlackSrcRed;
    NSNumber *_inputBlackDstRed;
    NSNumber *_inputShadowSrcRed;
    NSNumber *_inputShadowDstRed;
    NSNumber *_inputMidSrcRed;
    NSNumber *_inputMidDstRed;
    NSNumber *_inputHilightSrcRed;
    NSNumber *_inputHilightDstRed;
    NSNumber *_inputWhiteSrcRed;
    NSNumber *_inputWhiteDstRed;
    NSNumber *_inputBlackSrcGreen;
    NSNumber *_inputBlackDstGreen;
    NSNumber *_inputShadowSrcGreen;
    NSNumber *_inputShadowDstGreen;
    NSNumber *_inputMidSrcGreen;
    NSNumber *_inputMidDstGreen;
    NSNumber *_inputHilightSrcGreen;
    NSNumber *_inputHilightDstGreen;
    NSNumber *_inputWhiteSrcGreen;
    NSNumber *_inputWhiteDstGreen;
    NSNumber *_inputBlackSrcBlue;
    NSNumber *_inputBlackDstBlue;
    NSNumber *_inputShadowSrcBlue;
    NSNumber *_inputShadowDstBlue;
    NSNumber *_inputMidSrcBlue;
    NSNumber *_inputMidDstBlue;
    NSNumber *_inputHilightSrcBlue;
    NSNumber *_inputHilightDstBlue;
    NSNumber *_inputWhiteSrcBlue;
    NSNumber *_inputWhiteDstBlue;
    NSString *_inputColorSpace;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputBlackSrcRGB;
@property (retain, nonatomic) NSNumber *inputBlackDstRGB;
@property (retain, nonatomic) NSNumber *inputShadowSrcRGB;
@property (retain, nonatomic) NSNumber *inputShadowDstRGB;
@property (retain, nonatomic) NSNumber *inputMidSrcRGB;
@property (retain, nonatomic) NSNumber *inputMidDstRGB;
@property (retain, nonatomic) NSNumber *inputHilightSrcRGB;
@property (retain, nonatomic) NSNumber *inputHilightDstRGB;
@property (retain, nonatomic) NSNumber *inputWhiteSrcRGB;
@property (retain, nonatomic) NSNumber *inputWhiteDstRGB;
@property (retain, nonatomic) NSNumber *inputBlackSrcRed;
@property (retain, nonatomic) NSNumber *inputBlackDstRed;
@property (retain, nonatomic) NSNumber *inputShadowSrcRed;
@property (retain, nonatomic) NSNumber *inputShadowDstRed;
@property (retain, nonatomic) NSNumber *inputMidSrcRed;
@property (retain, nonatomic) NSNumber *inputMidDstRed;
@property (retain, nonatomic) NSNumber *inputHilightSrcRed;
@property (retain, nonatomic) NSNumber *inputHilightDstRed;
@property (retain, nonatomic) NSNumber *inputWhiteSrcRed;
@property (retain, nonatomic) NSNumber *inputWhiteDstRed;
@property (retain, nonatomic) NSNumber *inputBlackSrcGreen;
@property (retain, nonatomic) NSNumber *inputBlackDstGreen;
@property (retain, nonatomic) NSNumber *inputShadowSrcGreen;
@property (retain, nonatomic) NSNumber *inputShadowDstGreen;
@property (retain, nonatomic) NSNumber *inputMidSrcGreen;
@property (retain, nonatomic) NSNumber *inputMidDstGreen;
@property (retain, nonatomic) NSNumber *inputHilightSrcGreen;
@property (retain, nonatomic) NSNumber *inputHilightDstGreen;
@property (retain, nonatomic) NSNumber *inputWhiteSrcGreen;
@property (retain, nonatomic) NSNumber *inputWhiteDstGreen;
@property (retain, nonatomic) NSNumber *inputBlackSrcBlue;
@property (retain, nonatomic) NSNumber *inputBlackDstBlue;
@property (retain, nonatomic) NSNumber *inputShadowSrcBlue;
@property (retain, nonatomic) NSNumber *inputShadowDstBlue;
@property (retain, nonatomic) NSNumber *inputMidSrcBlue;
@property (retain, nonatomic) NSNumber *inputMidDstBlue;
@property (retain, nonatomic) NSNumber *inputHilightSrcBlue;
@property (retain, nonatomic) NSNumber *inputHilightDstBlue;
@property (retain, nonatomic) NSNumber *inputWhiteSrcBlue;
@property (retain, nonatomic) NSNumber *inputWhiteDstBlue;
@property (retain, nonatomic) NSString *inputColorSpace;

+ (id)customAttributes;
+ (id)defaultValueForKey:(id)arg1;
+ (id)P3Kernel;
+ (id)_customAttributesForKey:(id)arg1;

- (id)outputImage;
- (void)setDefaults;
- (double)floatValueForKey:(id)arg1 defaultValue:(double)arg2 clearIfNotDefault:(_Bool *)arg3;
- (id)_LUTImage;

@end
