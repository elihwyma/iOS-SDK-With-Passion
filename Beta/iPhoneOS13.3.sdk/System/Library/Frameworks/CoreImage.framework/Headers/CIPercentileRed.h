/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPercentileRed : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputPercentile;
    NSNumber *inputCount;
    NSNumber *inputScale;
    NSNumber *inputNormalize;
    NSNumber *inputClip;
    NSNumber *inputHard;
}

@property (retain, nonatomic) NSNumber *inputPercentile;
@property (retain, nonatomic) NSNumber *inputCount;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputNormalize;
@property (retain, nonatomic) NSNumber *inputClip;
@property (retain, nonatomic) NSNumber *inputHard;

+ (id)customAttributes;

- (id)outputImage;

@end
