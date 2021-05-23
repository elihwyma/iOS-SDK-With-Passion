/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNClassifyJunkImageRequestConfiguration : VNImageBasedRequestConfiguration

{
    unsigned long long _imageCropAndScaleOption;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
