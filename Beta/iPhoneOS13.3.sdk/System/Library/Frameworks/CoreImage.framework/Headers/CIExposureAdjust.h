/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIExposureAdjust : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputEV;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputEV;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;

@end
