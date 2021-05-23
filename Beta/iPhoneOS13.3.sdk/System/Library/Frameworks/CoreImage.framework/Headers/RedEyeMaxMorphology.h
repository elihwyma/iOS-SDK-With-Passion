/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeMaxMorphology : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
}

- (id)outputImage;

@end
