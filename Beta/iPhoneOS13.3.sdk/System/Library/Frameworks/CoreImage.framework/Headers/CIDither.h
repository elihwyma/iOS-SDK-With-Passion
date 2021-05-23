/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDither : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;
+ (id)_kernelDither;

- (id)outputImage;

@end
