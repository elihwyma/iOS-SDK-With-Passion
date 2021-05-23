/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFlashTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    CIColor *inputColor;
    NSNumber *inputTime;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputFadeThreshold;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputMaxStriationRadius;
@property (retain, nonatomic) NSNumber *inputStriationStrength;
@property (retain, nonatomic) NSNumber *inputStriationContrast;
@property (retain, nonatomic) NSNumber *inputFadeThreshold;

+ (id)customAttributes;

- (id)outputImage;
- (id)_geomKernel;
- (id)_colorKernel;

@end
