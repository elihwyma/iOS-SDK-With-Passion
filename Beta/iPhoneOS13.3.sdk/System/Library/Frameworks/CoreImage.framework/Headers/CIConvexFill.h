/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvexFill : CIFilter

{
    CIImage *inputImage;
    CIImage *inputCenter;
    NSNumber *inputThreshold;
    CIVector *inputAreaThresholdLoHi;
    NSNumber *inputSplat;
}

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) CIVector *inputAreaThresholdLoHi;
@property (retain, nonatomic) NSNumber *inputSplat;

- (id)outputImage;

@end
