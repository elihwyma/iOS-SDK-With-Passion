/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIParallelogramTile : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputAcuteAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;

- (id)outputImage;

@end
