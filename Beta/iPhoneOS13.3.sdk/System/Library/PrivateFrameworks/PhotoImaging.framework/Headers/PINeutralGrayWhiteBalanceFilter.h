/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PINeutralGrayWhiteBalanceFilter : CIFilter

{
    CIImage *_inputImage;
    NSNumber *_strength;
    NSNumber *_warmth;
    NSNumber *_y;
    NSNumber *_i;
    NSNumber *_q;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *strength;
@property (retain, nonatomic) NSNumber *warmth;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *i;
@property (retain, nonatomic) NSNumber *q;

+ (id)customAttributes;
+ (id)colorBalanceKernels;
+ (id)gHDRtoPPKernel;
+ (id)PPtogHDRKernel;
+ (id)RGBToYIQKernel;
+ (id)YIQToRGBKernel;
+ (id)whiteBalanceKernel;

- (id)outputImage;
- (id)applyInputConversion:(id)arg1;
- (id)applyOutputConversion:(id)arg1;
- (_Bool)isDefaultWarmth:(double)arg1;

@end
