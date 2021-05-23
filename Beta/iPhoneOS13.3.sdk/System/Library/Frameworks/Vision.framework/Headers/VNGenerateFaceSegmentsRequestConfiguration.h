/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration

{
    float _faceBoundingBoxExpansionRatio;
}

@property (nonatomic) float faceBoundingBoxExpansionRatio;

+ (_Bool)expansionRatioWithinValidRange:(float)arg1;
+ (float)defaultFaceBoundingBoxExpansionRatio;
+ (float)beginRangeFaceBoundingBoxExpansionRatio;
+ (float)endRangeFaceBoundingBoxExpansionRatio;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
