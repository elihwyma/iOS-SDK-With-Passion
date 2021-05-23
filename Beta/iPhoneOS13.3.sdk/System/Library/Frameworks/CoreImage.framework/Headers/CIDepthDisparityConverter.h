/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDepthDisparityConverter : CIFilter

{
    CIImage *inputImage;
}

@property (retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end
