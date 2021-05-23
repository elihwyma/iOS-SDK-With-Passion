/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIMorphology.h>

__attribute__((visibility("hidden")))
@interface CICheapMorphology : CIMorphology

+ (id)customAttributes;

- (id)outputImage;
- (struct CGRect)regionOf:(id)arg1 destRect:(struct CGRect)arg2 Offset:(float)arg3;

@end
