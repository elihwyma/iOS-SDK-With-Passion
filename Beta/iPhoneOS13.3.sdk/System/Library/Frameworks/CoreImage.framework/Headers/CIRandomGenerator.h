/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

__attribute__((visibility("hidden")))
@interface CIRandomGenerator : CIFilter

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
