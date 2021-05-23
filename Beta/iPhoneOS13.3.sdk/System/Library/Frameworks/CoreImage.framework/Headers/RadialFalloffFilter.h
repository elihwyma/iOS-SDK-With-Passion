/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RadialFalloffFilter : CIFilter

{
    CIVector *inputExtent;
    CIImage *inputCenter;
    NSNumber *inputFalloff;
    NSNumber *inputRadius;
    NSNumber *inputAnisotropic;
}

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputFalloff;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputAnisotropic;

- (id)outputImage;

@end
