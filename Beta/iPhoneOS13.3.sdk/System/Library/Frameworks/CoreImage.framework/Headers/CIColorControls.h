/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorControls : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputBrightness;
    NSNumber *inputContrast;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSaturation;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputContrast;

+ (id)customAttributes;

- (id)outputImage;

@end
