/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSupportedImageSize;

__attribute__((visibility("hidden")))
@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _detectorWantsAnisotropicScaling;
    VNSupportedImageSize *_detectorPreferredImageSize;
    double _detectorExecutionTimeInterval;
}

@property (retain, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) _Bool detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
