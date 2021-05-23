/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceSegmentationFilter : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRegion;
    NSNumber *inputOrientation;
    CIVector *inputFaceRect;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRegion;
@property (retain, nonatomic) NSNumber *inputOrientation;
@property (retain, nonatomic) CIVector *inputFaceRect;

- (id)outputImage;

@end
