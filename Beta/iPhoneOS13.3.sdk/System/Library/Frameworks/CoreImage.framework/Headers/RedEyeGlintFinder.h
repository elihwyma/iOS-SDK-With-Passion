/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface RedEyeGlintFinder : CIFilter

{
    CIImage *inputImage;
    CIVector *inputThresholds;
}

- (id)outputImage;

@end
