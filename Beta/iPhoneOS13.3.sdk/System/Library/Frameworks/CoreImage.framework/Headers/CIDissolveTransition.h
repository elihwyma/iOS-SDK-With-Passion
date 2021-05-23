/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDissolveTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputTime;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_fadeKernel;

@end
