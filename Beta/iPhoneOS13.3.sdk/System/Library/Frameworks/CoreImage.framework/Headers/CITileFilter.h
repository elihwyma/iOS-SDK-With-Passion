/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CITileFilter : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernel_name;
- (id)_kernel_source;
- (id)_croppedCenterPixelImage;

@end
