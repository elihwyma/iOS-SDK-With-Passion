/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothing : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputNumIterations;
}

@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputNumIterations;

+ (id)customAttributes;

- (id)outputImage;
- (id)_customBoxBlur5Kernel;
- (id)outputImageMetal;

@end
