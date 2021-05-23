/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDesaturateShadows : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputSoftness;
}

@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) NSNumber *inputSoftness;

+ (id)customAttributes;

- (id)outputImage;

@end
