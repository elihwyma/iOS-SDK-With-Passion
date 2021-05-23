/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBicubicScaleTransform : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputAspectRatio;
    NSNumber *inputB;
    NSNumber *inputC;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;
@property (retain, nonatomic) NSNumber *inputB;
@property (retain, nonatomic) NSNumber *inputC;

+ (id)customAttributes;

- (struct vec2)_scale;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
