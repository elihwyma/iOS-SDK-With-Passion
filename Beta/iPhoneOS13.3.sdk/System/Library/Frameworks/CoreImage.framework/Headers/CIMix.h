/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMix : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
    NSNumber *inputAmount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
