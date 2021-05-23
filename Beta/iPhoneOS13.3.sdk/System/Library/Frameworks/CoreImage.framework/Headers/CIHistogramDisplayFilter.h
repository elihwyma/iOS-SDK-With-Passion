/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHistogramDisplayFilter : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputHeight;
    NSNumber *inputHighLimit;
    NSNumber *inputLowLimit;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputHeight;
@property (retain, nonatomic) NSNumber *inputHighLimit;
@property (retain, nonatomic) NSNumber *inputLowLimit;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
