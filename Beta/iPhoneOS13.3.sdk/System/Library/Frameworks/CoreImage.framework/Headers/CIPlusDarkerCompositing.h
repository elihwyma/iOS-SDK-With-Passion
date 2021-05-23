/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/_CICompositeFilter.h>

__attribute__((visibility("hidden")))
@interface CIPlusDarkerCompositing : _CICompositeFilter

+ (id)customAttributes;
+ (id)_kernel;

- (id)outputImage;

@end
