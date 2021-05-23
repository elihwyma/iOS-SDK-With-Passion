/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStretchCrop : CIFilter

{
    CIImage *inputImage;
    CIVector *inputSize;
    NSNumber *inputCropAmount;
    NSNumber *inputCenterStretchAmount;
}

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
