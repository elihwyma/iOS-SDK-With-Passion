/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorClamp : CIFilter

{
    CIImage *inputImage;
    CIVector *inputMinComponents;
    CIVector *inputMaxComponents;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputMinComponents;
@property (retain, nonatomic) CIVector *inputMaxComponents;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelAlphaPreserving;

@end
