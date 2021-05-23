/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter

{
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputIntensity;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
