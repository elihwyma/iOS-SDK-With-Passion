/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CITriangleTile : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CITriangleTile;

@end
