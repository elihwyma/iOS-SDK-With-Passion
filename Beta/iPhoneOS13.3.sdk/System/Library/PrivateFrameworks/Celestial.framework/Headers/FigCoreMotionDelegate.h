/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject

{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } ringMutex;
    CMMotionManager *motionManager;
    _Bool manageFusedMotion;
    _Bool manageAccel;
    _Bool manageGravity;
    int accelRingIndex;
    float accelRingX[256];
    float accelRingY[256];
    float accelRingZ[256];
    double accelRingTime[256];
    int fusedRingIndex;
    double fusedRingTime[256];
    _Bool fusedRingDoingBiasEstimation[256];
    CDStruct_03942939 fusedRingAccel[256];
    CDStruct_bf7dff04 fusedRingQuaternion[256];
    CDStruct_03942939 fusedRingPosition[256];
    struct OpaqueFigSemaphore *dataSemaphore;
    double latestMotionDataTime;
    double latestGravityDataTime;
    _Bool copyingAllData;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dGyroUpdateInterval;
    double timestampLatency;
    double dStartOfLogging;
    _Bool gettingAttitudeChange;
    CDStruct_bf7dff04 previousQuaternion;
    CDStruct_bf7dff04 currentQuaternion;
    _Bool computingPosition;
    CDStruct_f31118bd position;
    CDStruct_f31118bd velocity;
}

- (id)init;
- (void)dealloc;
- (id)initWithAccelerometer:(_Bool)arg1 gravityZ:(_Bool)arg2 fusedMotion:(_Bool)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 motionCallbackThreadPriority:(id)arg6;
- (void)didUpdatePositionWithAcceleration:(CDStruct_869f9c67 *)arg1 forTimeStamp:(double)arg2;
- (void)didUpdateVelocityWithAcceleration:(CDStruct_869f9c67 *)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)getCurrentDeltaQuaternion:(CDStruct_bf7dff04 *)arg1;
- (void)updateDeviceCallback:(_Bool)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)updateGyroInterval:(float)arg1;
- (void)didUpdateAcceleration:(CDStruct_869f9c67)arg1 time:(double)arg2;
- (void)didUpdateGravity:(CDStruct_869f9c67)arg1 time:(double)arg2;
- (int)getVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (int)getGravityX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (int)getFusedVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (void)didUpdateFusedMotionWithDeviceMotion:(CDStruct_63cbf74e)arg1 time:(double)arg2 ifsync:(_Bool)arg3;
- (id)copyAllFusedMotionData;
- (id)copyNewFusedMotionData;
- (id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int *)arg4;
- (int)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (int)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (void)getCurrentQuaternion:(CDStruct_bf7dff04 *)arg1;
- (void)getCurrentAttitudeRoll:(double *)arg1 pitch:(double *)arg2 yaw:(double *)arg3;
- (void)getCurrentDeltaAttitudeRoll:(double *)arg1 pitch:(double *)arg2 yaw:(double *)arg3;
- (void)getPositionX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (int)getLatestMotionDataTime:(double *)arg1;
- (_Bool)managingFusedMotion;
- (_Bool)managingAccel;
- (_Bool)managingGravity;
- (_Bool)isCopyingAllData;

@end
