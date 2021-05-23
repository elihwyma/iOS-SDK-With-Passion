/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputAspectRatio;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;

@end
