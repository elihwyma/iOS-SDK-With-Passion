/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISoftCubicUpsample : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (struct vec2)_scale;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
