/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNCreateSmartCamprintRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _returnAllResults;
}

@property (nonatomic) _Bool returnAllResults;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
