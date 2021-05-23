/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILabDeltaE : CIFilter

{
    CIImage *inputImage;
    CIImage *inputImage2;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputImage2;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
