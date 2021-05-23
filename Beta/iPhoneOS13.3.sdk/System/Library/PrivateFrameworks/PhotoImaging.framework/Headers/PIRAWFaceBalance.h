/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIRAWFaceBalance : CIFilter

{
    CIImage *_inputImage;
    double _inputOrigI;
    double _inputOrigQ;
    double _inputStrength;
    double _inputWarmth;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double inputOrigI;
@property (nonatomic) double inputOrigQ;
@property (nonatomic) double inputStrength;
@property (nonatomic) double inputWarmth;

+ (struct CGColorSpace *)linearWideGamutColorSpace;
+ (id)faceBalanceKernels;

- (id)outputImage;

@end
