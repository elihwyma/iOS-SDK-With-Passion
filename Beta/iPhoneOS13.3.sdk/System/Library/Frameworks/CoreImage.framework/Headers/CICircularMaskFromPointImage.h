/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircularMaskFromPointImage : CIFilter

{
    CIImage *inputImage;
    CIImage *inputCoordinate;
    NSNumber *inputInnerRadius;
    NSNumber *inputOuterRadius;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputCoordinate;
@property (copy, nonatomic) NSNumber *inputInnerRadius;
@property (copy, nonatomic) NSNumber *inputOuterRadius;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelDraw;

@end
