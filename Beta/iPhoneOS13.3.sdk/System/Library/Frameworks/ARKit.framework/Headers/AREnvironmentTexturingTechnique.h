/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class AREnvironmentProbeManager, ARImageData, ARPlaneWorld, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AREnvironmentTexturingTechnique : ARTechnique

{
    ARPlaneWorld *_planeWorld;
    NSObject<OS_dispatch_queue> *_planeUpdateQueue;
    NSObject<OS_dispatch_queue> *_networkPrewarmQueue;
    ARImageData *_superWide;
    NSObject<OS_dispatch_semaphore> *_superWideSemaphore;
    _Bool _wantsHDREnvironmentTextures;
    _Bool _networkIntialized;
    AREnvironmentProbeManager *_probeManager;
}

@property (retain) AREnvironmentProbeManager *probeManager;
@property _Bool networkIntialized;
@property (readonly) _Bool wantsHDREnvironmentTextures;

- (_Bool)isEqual:(id)arg1;
- (void)prepare;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithOptions:(long long)arg1 wantsHDREnvironmentTextures:(_Bool)arg2;
- (_Bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;

@end
