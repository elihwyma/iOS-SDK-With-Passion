/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurPreProcess : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBlurmapImage;
    NSNumber *inputUseMetal;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurmapImage;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelMetal;

@end
