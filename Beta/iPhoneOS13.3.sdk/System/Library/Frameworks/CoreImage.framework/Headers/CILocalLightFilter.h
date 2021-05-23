/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalLightFilter : CIFilter

{
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSData *inputLightMap;
    CIImage *inputLightMapImage;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    NSNumber *inputLocalLight;
    NSNumber *inputSmartShadows;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_polyKernel;
- (id)_shadowKernel;

@end
