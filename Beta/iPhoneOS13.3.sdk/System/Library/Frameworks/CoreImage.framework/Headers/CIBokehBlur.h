/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBokehBlur : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputRingAmount;
    NSNumber *inputRingSize;
    NSNumber *inputSoftness;
    NSMutableArray *_recipe;
}

+ (id)customAttributes;

- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)outputImage;

@end
