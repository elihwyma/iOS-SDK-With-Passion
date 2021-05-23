/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIColorBalanceFilter : CIFilter

{
    CIImage *_inputImage;
    NSNumber *_inputWarmTemp;
    NSNumber *_inputWarmTint;
    NSNumber *_inputStrength;
    NSNumber *_inputHasFace;
    NSNumber *_inputIsRaw;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWarmTemp;
@property (retain, nonatomic) NSNumber *inputWarmTint;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputHasFace;
@property (retain, nonatomic) NSNumber *inputIsRaw;

+ (id)customAttributes;
+ (struct CGColorSpace *)linearWideGamutColorSpace;
+ (id)colorBalanceKernels;
+ (id)gHDRtoPPKernel;
+ (id)PPtogHDRKernel;
+ (id)colorBalanceKernel;

- (id)outputImage;
- (id)applyInputConversion:(id)arg1;
- (id)applyOutputConversion:(id)arg1;

@end
