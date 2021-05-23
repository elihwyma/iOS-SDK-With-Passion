/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheatBlur : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIBox6;
- (id)_CIBox4;
- (id)_CICross4;

@end
