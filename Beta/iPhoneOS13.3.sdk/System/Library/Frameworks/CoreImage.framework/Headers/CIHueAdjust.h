/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHueAdjust : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputAngle;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)outputImage;

@end
