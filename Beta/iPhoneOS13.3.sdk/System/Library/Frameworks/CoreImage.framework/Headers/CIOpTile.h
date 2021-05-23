/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIOpTile : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIOpTile;

@end
