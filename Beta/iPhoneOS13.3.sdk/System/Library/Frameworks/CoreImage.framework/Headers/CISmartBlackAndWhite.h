/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartBlackAndWhite : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputNeutralGamma;
    NSNumber *inputTone;
    NSNumber *inputHue;
    NSNumber *inputGrain;
    NSNumber *inputSeed;
    NSNumber *inputScaleFactor;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputStrength;
@property (copy, nonatomic) NSNumber *inputNeutralGamma;
@property (copy, nonatomic) NSNumber *inputTone;
@property (copy, nonatomic) NSNumber *inputHue;
@property (copy, nonatomic) NSNumber *inputGrain;
@property (copy, nonatomic) NSNumber *inputSeed;
@property (copy, nonatomic) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (void)getNonNormalizedSettings:(CDStruct_31328b19 *)arg1;
- (float *)createHueArray;
- (id)hueArrayImage:(float *)arg1;

@end
