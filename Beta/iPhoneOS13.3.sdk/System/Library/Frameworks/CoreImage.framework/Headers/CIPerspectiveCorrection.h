/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveCorrection : CIFilter

{
    CIImage *inputImage;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
    NSNumber *inputCrop;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputTopLeft;
@property (retain, nonatomic) CIVector *inputTopRight;
@property (retain, nonatomic) CIVector *inputBottomRight;
@property (retain, nonatomic) CIVector *inputBottomLeft;
@property (retain, nonatomic) NSNumber *inputCrop;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
