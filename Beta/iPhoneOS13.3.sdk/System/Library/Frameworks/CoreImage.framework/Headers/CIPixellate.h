/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPixellate : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
