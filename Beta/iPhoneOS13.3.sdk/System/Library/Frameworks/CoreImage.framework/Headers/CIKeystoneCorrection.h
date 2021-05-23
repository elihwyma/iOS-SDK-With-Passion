/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKeystoneCorrection : CIFilter

{
    struct float3x3 K;
    struct float3x3 invK;
    float pitch;
    float yaw;
    float roll;
    CIImage *inputImage;
    NSNumber *inputFocalLength;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputFocalLength;
@property (copy, nonatomic) CIVector *inputTopLeft;
@property (copy, nonatomic) CIVector *inputTopRight;
@property (copy, nonatomic) CIVector *inputBottomRight;
@property (copy, nonatomic) CIVector *inputBottomLeft;
@property (nonatomic, readonly) CDStruct_d80e62f2 outputTransform;
@property (nonatomic, readonly) CIFilter *outputRotationFilter;

+ (id)customAttributes;

- (id).cxx_construct;
- (id)outputImage;
- (void)computeCameraIntrinsics;
- (void)computeRotation;

@end
