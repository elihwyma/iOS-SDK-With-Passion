/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequestConfiguration.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNImageBasedRequestConfiguration : VNRequestConfiguration

{
    NSArray *_inputFaceObservations;
    struct CGRect _regionOfInterest;
}

@property (nonatomic) struct CGRect regionOfInterest;
@property (copy, nonatomic) NSArray *inputFaceObservations;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
