/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter

{
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
    NSNumber *inputDamping;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputWarmth;
@property (retain, nonatomic) NSNumber *inputDamping;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
