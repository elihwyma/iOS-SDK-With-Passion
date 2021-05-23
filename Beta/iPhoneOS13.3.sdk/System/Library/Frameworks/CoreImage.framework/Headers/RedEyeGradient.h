/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface RedEyeGradient : CIFilter

{
    CIImage *inputImage;
}

- (id)outputImage;

@end
