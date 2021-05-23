/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorCrossPolynomial : CIFilter

{
    CIImage *inputImage;
    CIVector *inputRedCoefficients;
    CIVector *inputGreenCoefficients;
    CIVector *inputBlueCoefficients;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRedCoefficients;
@property (retain, nonatomic) CIVector *inputGreenCoefficients;
@property (retain, nonatomic) CIVector *inputBlueCoefficients;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
