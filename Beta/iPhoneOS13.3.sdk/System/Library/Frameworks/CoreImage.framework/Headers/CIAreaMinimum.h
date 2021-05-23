/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIReductionFilter.h>

__attribute__((visibility("hidden")))
@interface CIAreaMinimum : CIReductionFilter

- (id)outputImage;
- (id)_reduce2X2;
- (id)_reduce1X4;
- (id)_reduce4X1;

@end
