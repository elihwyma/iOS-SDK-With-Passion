/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPageCurlTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIImage *inputShadingImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIPageCurlTransNoEmap;
- (id)_CIPageCurlTransition;

@end
