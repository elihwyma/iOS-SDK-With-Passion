/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeRecolor : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSource;
    CIImage *inputMask;
    NSNumber *inputNoiseAmount;
    NSNumber *inputBrightness;
    NSNumber *inputRecovery;
    CIVector *inputExtent;
    NSNumber *inputWhiteCutoff;
    NSNumber *inputChroma;
}

@property (retain, nonatomic) CIImage *inputSource;
@property (retain, nonatomic) CIImage *inputMask;
@property (retain, nonatomic) NSNumber *inputNoiseAmount;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputRecovery;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputWhiteCutoff;
@property (retain, nonatomic) NSNumber *inputChroma;

- (id)outputImage;
- (id)kernelRecovery;
- (id)kernelRepair;

@end
