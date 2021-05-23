/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMattingSolverInternal : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputPredicateImage;
    NSNumber *inputRadius;
    NSNumber *inputSubsampling;
    NSNumber *inputEPS;
    NSNumber *inputNumIterations;
    NSNumber *inputErosionKernelSize;
    NSNumber *inputUseDepthFilter;
    NSNumber *inputFGThresholdValue;
    NSNumber *inputBGThresholdValue;
}

+ (id)customAttributes;

- (id)outputImage;

@end
