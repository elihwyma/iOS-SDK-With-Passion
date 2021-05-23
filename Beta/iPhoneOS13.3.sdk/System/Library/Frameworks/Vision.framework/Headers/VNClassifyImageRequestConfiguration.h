/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNClassificationCustomHierarchy;

__attribute__((visibility("hidden")))
@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration

{
    VNClassificationCustomHierarchy *_customHierarchy;
    unsigned long long _maximumLeafObservations;
    unsigned long long _maximumHierarchicalObservations;
    unsigned long long _imageCropAndScaleOption;
}

@property (retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
