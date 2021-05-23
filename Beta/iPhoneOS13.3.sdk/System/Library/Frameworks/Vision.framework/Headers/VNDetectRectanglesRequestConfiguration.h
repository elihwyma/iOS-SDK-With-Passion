/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNDetectRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

{
    float _minimumAspectRatio;
    float _maximumAspectRatio;
    float _quadratureTolerance;
    float _minimumSize;
    float _minimumConfidence;
    unsigned long long _requiredVersion;
    unsigned long long _maximumObservations;
}

@property (nonatomic) unsigned long long requiredVersion;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) float minimumSize;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned long long maximumObservations;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
