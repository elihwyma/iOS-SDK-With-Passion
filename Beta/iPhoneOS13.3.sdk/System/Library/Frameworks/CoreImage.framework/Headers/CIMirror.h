/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMirror : CIFilter

{
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputAngle;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (struct Rectangle)computeDOD:(struct vec2)arg1 tst:(struct vec3)arg2 off:(struct vec4)arg3 mtx:(struct vec4)arg4;

@end
