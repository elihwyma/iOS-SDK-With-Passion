/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISpotLight : CIFilter

{
    CIImage *inputImage;
    CIVector *inputLightPosition;
    CIVector *inputLightPointsAt;
    NSNumber *inputBrightness;
    NSNumber *inputConcentration;
    CIColor *inputColor;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CISpotLight;

@end
