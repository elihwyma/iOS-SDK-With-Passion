/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIReductionFilter.h>

__attribute__((visibility("hidden")))
@interface CIAreaMinMax : CIReductionFilter

+ (id)customAttributes;

- (id)outputImage;
- (id)outputImageNonMPS;
- (id)outputImageMPS;

@end
