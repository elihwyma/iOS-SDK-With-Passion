/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorMatrix : CIFilter

{
    CIImage *inputImage;
    CIVector *inputRVector;
    CIVector *inputGVector;
    CIVector *inputBVector;
    CIVector *inputAVector;
    CIVector *inputBiasVector;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRVector;
@property (retain, nonatomic) CIVector *inputGVector;
@property (retain, nonatomic) CIVector *inputBVector;
@property (retain, nonatomic) CIVector *inputAVector;
@property (retain, nonatomic) CIVector *inputBiasVector;

+ (id)customAttributes;

- (id)outputImage;

@end
