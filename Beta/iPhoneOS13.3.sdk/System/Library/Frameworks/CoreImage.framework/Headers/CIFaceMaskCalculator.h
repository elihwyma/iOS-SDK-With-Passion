/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceMaskCalculator : CIFilter

{
    CIImage *inputImage;
    CIVector *inputFacesLeftEyeX;
    CIVector *inputFacesLeftEyeY;
    CIVector *inputFacesCenterX;
    CIVector *inputFacesCenterY;
    CIVector *inputFacesRightEyeX;
    CIVector *inputFacesRightEyeY;
    CIVector *inputFacesChinX;
    CIVector *inputFacesChinY;
    NSNumber *inputMaxBlur;
    NSNumber *inputFacesCapMultip;
    NSNumber *inputFacesMaxBlurOnEyes;
    NSNumber *inputFacesMaxBlurDistFromFocus;
    NSNumber *inputFacesLinearBlurGrowthM;
    NSNumber *inputFacesLinearBlurGrowthC;
    NSNumber *inputFacesEyeToEyebrowRatio;
    NSNumber *inputFacesDistToBlurScaling;
    NSNumber *inputFacesGainMultip;
    NSNumber *inputApertureScaling;
    NSDictionary *inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputFacesLeftEyeX;
@property (retain, nonatomic) CIVector *inputFacesLeftEyeY;
@property (retain, nonatomic) CIVector *inputFacesCenterX;
@property (retain, nonatomic) CIVector *inputFacesCenterY;
@property (retain, nonatomic) CIVector *inputFacesRightEyeX;
@property (retain, nonatomic) CIVector *inputFacesRightEyeY;
@property (retain, nonatomic) CIVector *inputFacesChinX;
@property (retain, nonatomic) CIVector *inputFacesChinY;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputFacesCapMultip;
@property (copy, nonatomic) NSNumber *inputFacesMaxBlurOnEyes;
@property (copy, nonatomic) NSNumber *inputFacesMaxBlurDistFromFocus;
@property (copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthM;
@property (copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthC;
@property (copy, nonatomic) NSNumber *inputFacesEyeToEyebrowRatio;
@property (copy, nonatomic) NSNumber *inputFacesDistToBlurScaling;
@property (copy, nonatomic) NSNumber *inputFacesGainMultip;
@property (copy, nonatomic) NSNumber *inputApertureScaling;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;

- (id)_kernel;
- (id)outputImage;
- (id)metalKernel;
- (id)outputImage_V4;

@end
