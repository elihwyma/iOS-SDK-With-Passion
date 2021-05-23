/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIReductionFilter : CIFilter

{
    CIImage *inputImage;
    CIVector *inputExtent;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;

+ (id)customAttributes;

- (id)outputImage;
- (id)_reduceCrop;
- (id)offsetAndCrop;

@end
