/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFeature.h>

__attribute__((visibility("hidden")))
@interface CIVNFeature : CIFeature

{
    float confidence;
}

@property (readonly) float confidence;

- (id)initWithObservation:(id)arg1 inImage:(id)arg2;

@end
