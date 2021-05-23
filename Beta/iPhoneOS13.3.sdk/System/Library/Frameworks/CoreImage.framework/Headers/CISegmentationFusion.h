/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISegmentationFusion : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSDictionary *inputTuningParameters;
}

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (id)kernel;

@end
