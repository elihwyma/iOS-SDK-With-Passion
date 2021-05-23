/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CITemperatureAndTint : CIFilter

{
    CIImage *inputImage;
    CIVector *inputNeutral;
    CIVector *inputTargetNeutral;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputNeutral;
@property (retain, nonatomic) CIVector *inputTargetNeutral;

+ (id)customAttributes;

- (id)outputImage;

@end
