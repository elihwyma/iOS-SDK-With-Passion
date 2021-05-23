/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CIHueSaturationValueGradient : CIFilter

{
    NSNumber *inputValue;
    NSNumber *inputRadius;
    NSNumber *inputSoftness;
    NSNumber *inputDither;
    id inputColorSpace;
}

@property (retain, nonatomic) NSNumber *inputValue;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSoftness;
@property (retain, nonatomic) NSNumber *inputDither;
@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelD;

@end
