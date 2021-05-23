/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICrystallize : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    CIVector *inputCenter;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICrystallize;

@end
