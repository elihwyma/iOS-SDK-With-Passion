/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIIntegralImage : CIFilter

{
    CIImage *inputImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end
