/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputSkyAmount;
    NSNumber *inputGrassAmount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSkyAmount;
@property (retain, nonatomic) NSNumber *inputGrassAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
