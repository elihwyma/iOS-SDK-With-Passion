/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheapBlur : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputPasses;
    NSNumber *inputSampling;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICheapBlur;
- (id)_CILerp;

@end
