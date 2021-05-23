/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMAccelerometerData, CMAmbientPressureData, CMDeviceMotion, CMGyroData, CMMagnetometerData;

@interface CMMotionManager : NSObject

{
    id _internal;
}

@property (nonatomic, readonly, getter=isSidebandSensorFusionAvailable) _Bool sidebandSensorFusionAvailable;
@property (nonatomic, readonly, getter=isPredictedDeviceMotionAvailable) _Bool predictedDeviceMotionAvailable;
@property (nonatomic, setter=_setAudioAccessoryAccelerometerUpdateInterval:) double _audioAccessoryAccelerometerUpdateInterval;
@property (nonatomic, readonly, getter=_isAudioAccessoryAccelerometerAvailable) _Bool _audioAccessoryAccelerometerAvailable;
@property (readonly) CMAmbientPressureData *ambientPressureData;
@property (readonly) CMAmbientPressureData *compensatedAmbientPressureData;
@property (nonatomic, readonly, getter=isDeviceMotionLiteAvailable) _Bool isDeviceMotionLiteAvailable;
@property (nonatomic) double accelerometerUpdateInterval;
@property (nonatomic, readonly, getter=isAccelerometerAvailable) _Bool accelerometerAvailable;
@property (nonatomic, readonly, getter=isAccelerometerActive) _Bool accelerometerActive;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (nonatomic) double gyroUpdateInterval;
@property (nonatomic, readonly, getter=isGyroAvailable) _Bool gyroAvailable;
@property (nonatomic, readonly, getter=isGyroActive) _Bool gyroActive;
@property (readonly) CMGyroData *gyroData;
@property (nonatomic) double magnetometerUpdateInterval;
@property (nonatomic, readonly, getter=isMagnetometerAvailable) _Bool magnetometerAvailable;
@property (nonatomic, readonly, getter=isMagnetometerActive) _Bool magnetometerActive;
@property (readonly) CMMagnetometerData *magnetometerData;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (nonatomic, readonly) unsigned long long attitudeReferenceFrame;
@property (nonatomic, readonly, getter=isDeviceMotionAvailable) _Bool deviceMotionAvailable;
@property (nonatomic, readonly, getter=isDeviceMotionActive) _Bool deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (nonatomic) _Bool showsDeviceMovementDisplay;

+ (void)initialize;
+ (void)dummySelector:(id)arg1;
+ (unsigned long long)availableAttitudeReferenceFrames;
+ (_Bool)deviceMotionInitialized:(struct Sample *)arg1;
+ (_Bool)northAlignedReferenceFrame:(unsigned long long)arg1;
+ (CDStruct_f329898c)gyroCalibrationDatabaseGetBiasFit;
+ (void)setAllowInBackground:(_Bool)arg1;
+ (void)dumpDb:(long long)arg1 toURL:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
+ (_Bool)supportsGyroMiniCalibration;
+ (_Bool)startGyroMiniCalibration;
+ (_Bool)setUrgentCalFlag;
+ (_Bool)configureM7Activity:(_Bool)arg1 stepCounting:(_Bool)arg2 activityForceCodeTransition:(_Bool)arg3 stepCountingForceCodeTransition:(_Bool)arg4 threshold:(_Bool)arg5 onBodyDetection:(_Bool)arg6 ispMode:(unsigned char)arg7 predictionInterval:(float)arg8 logLevel:(BOOL)arg9 proactiveRevisitTime:(unsigned short)arg10;
+ (CDStruct_f329898c)gyroCalibrationDatabaseGetBiasFitAndEstimate:(CDStruct_31142d93 *)arg1 atTemperature:(float)arg2;
+ (_Bool)hasRunMiniCal;

- (id)init;
- (void)dealloc;
- (void)connect;
- (void)stopAccelerometerUpdates;
- (void)setAccelerometerDataCallback:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 interval:(double)arg3;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (id)initUsingGyroOnlySensorFusion;
- (void)setPowerConservationMode:(int)arg1;
- (void)setDeviceMotionCallback:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 interval:(double)arg3 fsync:(_Bool)arg4;
- (void)setNotificationCallback:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2;
- (id)initPrivate;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)startAccelerometerUpdates;
- (void)onAmbientPressure:(const struct Sample *)arg1;
- (void)onCompensatedAmbientPressure:(const struct Sample *)arg1;
- (void)onAudioAccessoryAccelerometer:(const struct Sample *)arg1;
- (void)onAccelerometer:(const struct Sample *)arg1;
- (void)onGyro:(const struct Sample *)arg1;
- (void)onMagnetometer:(const struct Sample *)arg1;
- (void)onDeviceMotion:(const struct Sample *)arg1;
- (void)onGeomagneticModel:(const CDStruct_3e502cbb *)arg1;
- (void)deallocPrivate;
- (void)stopAccelerometerUpdatesPrivate;
- (void)stopGyroUpdatesPrivate;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)_stopDeviceMotionErrorUpdates;
- (void)stopMagnetometerUpdatesPrivate;
- (void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)_isAudioAccessoryAccelerometerAvailablePrivate;
- (void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setAmbientPressureUpdateIntervalPrivate:(double)arg1;
- (void)startAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopAmbientPressureUpdatesPrivate;
- (void)setCompensatedAmbientPressureUpdateIntervalPrivate:(double)arg1;
- (void)startCompensatedAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopCompensatedAmbientPressureUpdatesPrivate;
- (_Bool)isAmbientPressureAvailable;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)applyNorthReference:(struct Sample *)arg1;
- (void)applyInitialReference:(struct Sample *)arg1;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)dismissDeviceMovementDisplay;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setShowsDeviceMovementDisplayPrivate:(_Bool)arg1;
- (void)setGyroDataCallback:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 interval:(double)arg3;
- (void)setMagnetometerDataCallback:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 interval:(double)arg3;
- (_Bool)setSidebandSensorFusionEnable:(_Bool)arg1 measureLatency:(_Bool)arg2 withSnoopHandler:(CDUnknownBlockType)arg3;
- (void)setSidebandTimeSyncHandler:(CDUnknownBlockType)arg1;
- (_Bool)sendDeviceMotionError:(int)arg1;
- (void)showDeviceMovementDisplay;
- (void)willResignActivePrivate:(id)arg1;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)setUseAccelerometer:(_Bool)arg1;
- (_Bool)useAccelerometer;
- (id)_audioAccessoryAccelerometerData;
- (void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_stopAudioAccessoryAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setAmbientPressureUpdateInterval:(double)arg1;
- (double)ambientPressureUpdateInterval;
- (_Bool)isAmbientPressureActive;
- (void)startAmbientPressureUpdates;
- (void)startAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopAmbientPressureUpdates;
- (_Bool)readRawAmbientPressureSamplesFromDB:(id)arg1 toQueue:(id)arg2 where:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)computeNonlinearPRTTFromDB:(id)arg1 where:(id)arg2;
- (void)setCompensatedAmbientPressureUpdateInterval:(double)arg1;
- (double)compensatedAmbientPressureUpdateInterval;
- (_Bool)isCompensatedAmbientPressureActive;
- (void)startCompensatedAmbientPressureUpdates;
- (void)startCompensatedAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopCompensatedAmbientPressureUpdates;
- (void)startGyroUpdates;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopGyroUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)rebuildGytt;
- (int)gyttNumTemperatures;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopMagnetometerUpdates;
- (id)initUsing6AxisSensorFusion;
- (_Bool)setSidebandSensorFusionEnable:(_Bool)arg1;
- (_Bool)setSidebandSensorFusionEnable:(_Bool)arg1 withSnoopHandler:(CDUnknownBlockType)arg2;
- (_Bool)setMotionThreadPriority:(int)arg1;
- (void)_startDeviceMotionErrorUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)predictedDeviceMotionAtTimestamp:(double)arg1 error:(out id *)arg2;
- (void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg1 usingConfiguration:(CDStruct_fcaf9308)arg2 toQueue:(id)arg3 withFusedHandler:(CDUnknownBlockType)arg4;
- (void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg1 toQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg1;

@end
