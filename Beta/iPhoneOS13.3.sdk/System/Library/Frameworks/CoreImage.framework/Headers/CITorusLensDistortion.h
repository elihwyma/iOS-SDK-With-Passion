/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CITorusLensDistortion : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputWidth;
    NSNumber *inputRefraction;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CITorusRefraction;

@end
