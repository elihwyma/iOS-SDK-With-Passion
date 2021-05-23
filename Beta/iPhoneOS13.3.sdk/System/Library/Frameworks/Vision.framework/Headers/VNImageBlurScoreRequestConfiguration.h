/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration

{
    unsigned long long _maximumIntermediateSideLength;
    unsigned long long _blurDeterminationMethod;
}

@property (nonatomic) unsigned long long maximumIntermediateSideLength;
@property (nonatomic) unsigned long long blurDeterminationMethod;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
