/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter

{
    CIImage *inputImage;
    CIImage *inputGradientImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputGradientImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
