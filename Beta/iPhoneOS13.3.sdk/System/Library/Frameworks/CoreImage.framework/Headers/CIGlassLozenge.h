/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGlassLozenge : CIFilter

{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputRadius;
    NSNumber *inputRefraction;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CILozengeRefraction;

@end
