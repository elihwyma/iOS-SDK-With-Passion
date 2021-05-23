/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKaleidoscope : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputCount;
    CIVector *inputCenter;
    NSNumber *inputAngle;
}

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (struct CGRect)_outputExtent;

@end
