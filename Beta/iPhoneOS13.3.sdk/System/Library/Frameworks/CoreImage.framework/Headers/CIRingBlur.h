/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRingBlur : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputPointCount;
}

+ (id)customAttributes;

- (id)outputImage;

@end
