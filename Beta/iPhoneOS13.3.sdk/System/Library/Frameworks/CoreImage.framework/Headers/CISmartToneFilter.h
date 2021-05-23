/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIContext, CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartToneFilter : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputExposure;
    NSNumber *inputContrast;
    NSNumber *inputBrightness;
    NSNumber *inputShadows;
    NSNumber *inputHighlights;
    NSNumber *inputBlack;
    NSNumber *inputRawHighlights;
    NSNumber *inputLocalLight;
    NSData *_inputLightMap;
    NSNumber *inputUseCube;
    id inputUseCubeColorSpace;
    CIImage *_cubeImage;
    NSData *_cubeData;
    CIContext *_cubeContext;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputExposure;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputShadows;
@property (retain, nonatomic) NSNumber *inputHighlights;
@property (retain, nonatomic) NSNumber *inputBlack;
@property (retain, nonatomic) NSNumber *inputRawHighlights;
@property (retain, nonatomic) NSNumber *inputLocalLight;
@property (retain, nonatomic) NSData *inputLightMap;
@property (retain, nonatomic) NSNumber *inputUseCube;
@property (retain, nonatomic) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernelH;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelRH;
- (id)_kernelC;

@end
