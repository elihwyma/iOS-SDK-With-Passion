/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFocalPlaneNative : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIImage *inputLensModelCalculatorImage;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_focalPlanePreProcessorKernelPow2;
- (id)_focalPlanePreProcessorKernel;

@end
