/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISeedFill : CIFilter

{
    CIImage *inputImage;
    CIImage *inputCenter;
    NSNumber *inputThreshold;
    CIVector *inputExtent;
    NSNumber *inputSplat;
}

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputSplat;

- (id)outputImage;

@end
