/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CILensModelCalculator : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMinMaxImage;
    CIVector *inputOriginalSize;
    CIVector *inputFocusRect;
    NSNumber *inputSimulatedAperture;
    NSNumber *inputIntrinsicMatrixFocalLength;
    NSDictionary *inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMinMaxImage;
@property (copy, nonatomic) CIVector *inputOriginalSize;
@property (copy, nonatomic) CIVector *inputFocusRect;
@property (copy, nonatomic) NSNumber *inputSimulatedAperture;
@property (copy, nonatomic) NSNumber *inputIntrinsicMatrixFocalLength;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)outputImage;
- (id)kernel;
- (id)cpuParams;

@end
