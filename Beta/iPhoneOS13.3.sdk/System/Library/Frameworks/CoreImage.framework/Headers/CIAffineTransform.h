/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineTransform : CIFilter

{
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSValue *inputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)arg1;

@end
