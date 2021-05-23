/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _returnAllResults;
    _Bool _useCenterTileOnly;
    unsigned long long _imageCropAndScaleOption;
}

@property (nonatomic) _Bool returnAllResults;
@property (nonatomic) _Bool useCenterTileOnly;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
