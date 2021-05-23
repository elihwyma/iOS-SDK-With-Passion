/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class NSObject;

@protocol OS_dispatch_semaphore;

@interface ARExposureLightEstimationTechnique : ARTechnique

{
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    float _temperature;
    float _lightIntensity;
    struct ExponentialSmoother<float> _smoother;
}

- (id)init;
- (id).cxx_construct;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
