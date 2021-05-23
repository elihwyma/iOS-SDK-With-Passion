/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILensModelApplyV3 : CIFilter

{
    CIImage *inputImage;
    CIImage *inputLensModelImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputLensModelImage;

- (id)outputImage;
- (id)kernel;

@end
