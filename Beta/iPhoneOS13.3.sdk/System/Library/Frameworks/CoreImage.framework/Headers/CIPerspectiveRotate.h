/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveRotate : CIFilter

{
    struct float3x3 K;
    struct float3x3 invK;
    CIImage *inputImage;
    NSNumber *inputFocalLength;
    NSNumber *inputPitch;
    NSNumber *inputYaw;
    NSNumber *inputRoll;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputFocalLength;
@property (copy, nonatomic) NSNumber *inputPitch;
@property (copy, nonatomic) NSNumber *inputYaw;
@property (copy, nonatomic) NSNumber *inputRoll;
@property (nonatomic, readonly) CDStruct_d80e62f2 outputTransform;

+ (id)customAttributes;

- (id).cxx_construct;
- (id)outputImage;
- (void)computeCameraIntrinsics;

@end
