/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGaussianBlurXY : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputSigmaX;
    NSNumber *inputSigmaY;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSigmaX;
@property (retain, nonatomic) NSNumber *inputSigmaY;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;

@end
