/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIReductionFilter.h>

__attribute__((visibility("hidden")))
@interface CIAreaMinMaxRed : CIReductionFilter

+ (id)customAttributes;

- (id)outputImage;
- (id)_reduceCrop;
- (id)_reduce2X2;
- (id)_reduce1X4;
- (id)_reduce4X1;
- (id)_reduce4x4;

@end
