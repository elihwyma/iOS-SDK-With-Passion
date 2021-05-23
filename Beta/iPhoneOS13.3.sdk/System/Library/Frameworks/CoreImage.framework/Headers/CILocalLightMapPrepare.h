/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalLightMapPrepare : CIFilter

{
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}

+ (id)customAttributes;

- (id)outputImage;

@end
