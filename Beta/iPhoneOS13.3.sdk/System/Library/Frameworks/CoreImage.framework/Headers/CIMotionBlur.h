/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMotionBlur : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputAngle;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 legacyExtent:(struct CGRect *)arg4;

@end
