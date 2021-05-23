/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRippleTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputShadingImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputWidth;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIRippleTransition;

@end
