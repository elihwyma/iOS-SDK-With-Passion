/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CUIOuterBevelEmbossFilter.h>

__attribute__((visibility("hidden")))
@interface CUIInnerBevelEmbossFilter : CUIOuterBevelEmbossFilter

- (id)outputImage;
- (id)_kernelInvertMask;
- (id)_kernelMultiplyByMask;

@end
