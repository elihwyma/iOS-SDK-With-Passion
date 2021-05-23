/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPaperWash : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputGreyscale;
}

@property (copy, nonatomic) NSNumber *inputSaturation;
@property (copy, nonatomic) NSNumber *inputGreyscale;

+ (id)customAttributes;

- (id)outputImage;

@end
