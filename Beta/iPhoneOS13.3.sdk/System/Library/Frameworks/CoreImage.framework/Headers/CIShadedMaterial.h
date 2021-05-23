/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIShadedMaterial : CIFilter

{
    CIImage *inputImage;
    CIImage *inputShadingImage;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIShadedmaterial_0;
- (id)_CIShadedmaterial;

@end
