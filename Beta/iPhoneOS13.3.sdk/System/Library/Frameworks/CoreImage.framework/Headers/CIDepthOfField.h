/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthOfField : CIFilter

{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputSaturation;
    NSNumber *inputUnsharpMaskRadius;
    NSNumber *inputUnsharpMaskIntensity;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIAlphaNormalize;
- (id)_CITiltShift;
- (id)_DistanceColored;

@end
