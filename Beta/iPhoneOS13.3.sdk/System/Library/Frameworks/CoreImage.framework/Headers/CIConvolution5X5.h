/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution5X5 : CIFilter

{
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputWeights;
@property (retain, nonatomic) NSNumber *inputBias;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;

@end
