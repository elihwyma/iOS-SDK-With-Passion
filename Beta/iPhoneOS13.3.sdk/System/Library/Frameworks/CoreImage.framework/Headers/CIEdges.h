/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIEdges : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIEdges;

@end
