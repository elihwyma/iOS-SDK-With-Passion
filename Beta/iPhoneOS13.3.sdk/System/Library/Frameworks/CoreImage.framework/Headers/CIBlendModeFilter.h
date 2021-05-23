/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendModeFilter : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
