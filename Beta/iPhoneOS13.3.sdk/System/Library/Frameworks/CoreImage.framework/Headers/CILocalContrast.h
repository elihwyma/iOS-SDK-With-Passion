/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalContrast : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelLocalContrast;

@end
