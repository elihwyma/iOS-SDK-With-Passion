/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIScaleClampFilter : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
