/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPinchDistortion : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)outputImage;
- (struct CGRect)computeDOD:(float)arg1 scale:(float)arg2;
- (id)_pinchDistortionScaleLT1;
- (id)_pinchDistortionScaleGE1;

@end
