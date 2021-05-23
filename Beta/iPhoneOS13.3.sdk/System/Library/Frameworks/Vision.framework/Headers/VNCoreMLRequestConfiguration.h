/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration

{
    unsigned long long _imageCropAndScaleOption;
    id <NSObject><NSCopying> _modelCachingIdentifier;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (copy, nonatomic) id <NSObject><NSCopying> modelCachingIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (void)updateWithPropertiesOfModel:(id)arg1;

@end
