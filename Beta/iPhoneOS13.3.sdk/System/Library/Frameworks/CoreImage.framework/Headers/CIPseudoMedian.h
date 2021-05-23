/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPseudoMedian : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputWeights;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputWeights;

+ (id)customAttributes;

- (id)outputImage;

@end
