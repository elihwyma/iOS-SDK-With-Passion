/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHoleDistortion : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_geomKernel;
- (id)_colorKernel;
- (struct CGRect)computeDOD;

@end
