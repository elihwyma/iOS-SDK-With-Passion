/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPageCurlWithShadowTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputShadowSize;
    NSNumber *inputShadowAmount;
    CIVector *inputShadowExtent;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIPageCurlWithShadowTransition;
- (id)_CIPageCurlNoShadowTransition;

@end
