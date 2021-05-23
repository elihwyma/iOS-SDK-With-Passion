/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineClamp : CIFilter

{
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSValue *inputTransform;

+ (id)customAttributes;

- (id)outputImage;

@end
