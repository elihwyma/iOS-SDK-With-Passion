/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAppleSmithGossettScale : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;

@end
