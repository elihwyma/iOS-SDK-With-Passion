/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _forceFaceprintCreation;
}

@property _Bool forceFaceprintCreation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
