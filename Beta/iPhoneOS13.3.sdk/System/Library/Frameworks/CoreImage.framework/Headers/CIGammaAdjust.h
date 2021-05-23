/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGammaAdjust : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputPower;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputPower;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;

@end
