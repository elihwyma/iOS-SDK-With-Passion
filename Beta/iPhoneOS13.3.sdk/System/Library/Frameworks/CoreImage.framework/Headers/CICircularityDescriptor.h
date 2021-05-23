/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CICircularityDescriptor : CIFilter

{
    CIImage *inputImage;
    CIImage *inputCentroid;
    CIVector *inputExtent;
}

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIImage *inputCentroid;

- (id)outputImage;

@end
