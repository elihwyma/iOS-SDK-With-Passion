/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _refineMouthRegion;
    _Bool _refineLeftEyeRegion;
    _Bool _refineRightEyeRegion;
    _Bool _performBlinkDetection;
    NSNumber *_cascadeStepCount;
    unsigned long long _constellation;
}

@property (nonatomic) _Bool refineMouthRegion;
@property (nonatomic) _Bool refineLeftEyeRegion;
@property (nonatomic) _Bool refineRightEyeRegion;
@property (nonatomic) _Bool performBlinkDetection;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property (nonatomic) unsigned long long constellation;

+ (_Bool)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
