/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/_CICompositeFilter.h>

__attribute__((visibility("hidden")))
@interface CISourceOverCompositing : _CICompositeFilter

+ (id)_kernel;

- (id)outputImage;

@end
