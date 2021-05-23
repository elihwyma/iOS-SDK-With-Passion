/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIComicEffect : CIFilter

{
    CIImage *inputImage;
}

+ (id)customAttributes;

- (id)outputImage;

@end
