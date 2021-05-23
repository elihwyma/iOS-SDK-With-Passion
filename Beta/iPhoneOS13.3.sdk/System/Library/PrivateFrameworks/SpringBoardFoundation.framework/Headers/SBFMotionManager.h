/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class CMMotionManager, SBFInfiniteImpulseResponseFilter;

@interface SBFMotionManager : NSObject

{
    double _x;
    double _y;
    double _z;
    CDStruct_91d2e2b9 _attitude;
    double _roll;
    double _pitch;
    double _yaw;
    double _coefficient;
    double _threshold;
    unsigned long long _referenceFrame;
    CMMotionManager *_motionManager;
    _Bool _motionManagerPaused;
    SBFInfiniteImpulseResponseFilter *_motionFilterX;
    SBFInfiniteImpulseResponseFilter *_motionFilterY;
    SBFInfiniteImpulseResponseFilter *_motionFilterZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAX;
    SBFInfiniteImpulseResponseFilter *_motionFilterAY;
    SBFInfiniteImpulseResponseFilter *_motionFilterAZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAW;
    SBFInfiniteImpulseResponseFilter *_motionFilterRoll;
    SBFInfiniteImpulseResponseFilter *_motionFilterPitch;
    SBFInfiniteImpulseResponseFilter *_motionFilterYaw;
}

@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly) double z;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double yaw;
@property (nonatomic, readonly) CDStruct_91d2e2b9 attitude;
@property (nonatomic, readonly) SBFInfiniteImpulseResponseFilter *motionFilterX;
@property (nonatomic, readonly) SBFInfiniteImpulseResponseFilter *motionFilterY;
@property (nonatomic, readonly) SBFInfiniteImpulseResponseFilter *motionFilterZ;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (nonatomic) double accelerometerUpdateInterval;

- (id)init;
- (id)initWithCoefficient:(double)arg1;
- (_Bool)isDeviceMotionAvailable;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (id)initWithCoefficient:(double)arg1 threshold:(double)arg2;
- (void)createMotionManager;
- (void)_createFilters;
- (_Bool)zeroMovementSinceLastFrame;
- (void)startDeviceAccelerometerUpdates;
- (void)pauseDeviceMotionUpdates;
- (void)stopDeviceAccelerometerUpdates;

@end
