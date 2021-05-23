/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CITriangleKaleidoscope : CIFilter

{
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputSize;
    NSNumber *inputRotation;
    NSNumber *inputDecay;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputRotation;
@property (retain, nonatomic) NSNumber *inputDecay;

+ (id)customAttributes;

- (id)outputImage;
- (id)_geomKernel;
- (id)_colorKernel;

@end
