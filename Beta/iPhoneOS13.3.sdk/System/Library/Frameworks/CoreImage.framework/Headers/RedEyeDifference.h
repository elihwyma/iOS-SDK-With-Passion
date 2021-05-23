/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface RedEyeDifference : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSubtractedImage;
}

- (id)outputImage;

@end
