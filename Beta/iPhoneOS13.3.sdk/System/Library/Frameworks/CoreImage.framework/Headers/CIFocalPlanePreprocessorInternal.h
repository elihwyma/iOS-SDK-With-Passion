/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFocalPlanePreprocessorInternal : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputFocusRect;
    NSNumber *inputZeroShiftPercentile;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}

+ (id)customAttributes;

- (id)outputImage;

@end
