/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CINoiseReduction : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputNoiseLevel;
    NSNumber *inputSharpness;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CINoiseReduction;

@end
