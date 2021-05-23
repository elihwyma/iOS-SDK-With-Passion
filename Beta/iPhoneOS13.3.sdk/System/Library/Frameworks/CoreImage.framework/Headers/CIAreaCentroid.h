/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIReductionFilter.h>

__attribute__((visibility("hidden")))
@interface CIAreaCentroid : CIReductionFilter

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelWeightedCoordinate;
- (id)_kernelCentroid;

@end
