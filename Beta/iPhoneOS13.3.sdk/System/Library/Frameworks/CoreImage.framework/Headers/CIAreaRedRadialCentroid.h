/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIAreaRedCentroid.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAreaRedRadialCentroid : CIAreaRedCentroid

{
    CIImage *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputRadialMode;
    NSNumber *inputMinWeight;
}

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputRadialMode;
@property (retain, nonatomic) NSNumber *inputMinWeight;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelCenter;
- (id)_kernelDisk;
- (id)_kernelGaussian;

@end
