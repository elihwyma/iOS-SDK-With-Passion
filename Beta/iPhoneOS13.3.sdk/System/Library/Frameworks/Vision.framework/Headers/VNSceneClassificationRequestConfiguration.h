/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNClassificationCustomHierarchy, VNSceneObservation;

__attribute__((visibility("hidden")))
@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration

{
    VNSceneObservation *_sceneObservation;
    VNClassificationCustomHierarchy *_customHierarchy;
    unsigned long long _maximumLeafObservations;
    unsigned long long _maximumHierarchicalObservations;
}

@property (retain, nonatomic) VNSceneObservation *sceneObservation;
@property (retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
