/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureAPSSphereInteractionCalibrationContext, FigCaptureAutoFocusCalibrationContext, FigCaptureAutoFocusPositionSensorCalibrationContext, FigCaptureSphereCalibrationContext, FigCaptureSphereEndStopCalibrationContext, NSMutableArray;

@protocol OS_dispatch_queue;

@interface FigCaptureCalibrationMonitor : NSObject

{
    NSMutableArray *_streamCalibrationInformation;
    NSObject<OS_dispatch_queue> *_calibrationRunQueue;
    struct OpaqueFigSimpleMutex *_calibrationPipelineMutex;
    _Bool _calibrationShouldAbort;
    struct os_unfair_lock_s _calibrationLock;
    CDStruct_31142d93 _coreMotionMagneticField;
    double _coreMotionMagneticFieldMagnitude;
    int _magneticFieldAttempt;
    int _magneticFieldAccuracyAttemptCount;
    struct {
        int attemptCount;
        double threshold;
    } _magneticFieldMagnitudeTiers[1];
    FigCaptureAutoFocusPositionSensorCalibrationContext *_autoFocusPositionSensorCalibrationContext;
    FigCaptureAutoFocusCalibrationContext *_autoFocusCalibrationContext;
    FigCaptureAPSSphereInteractionCalibrationContext *_apsSphereInteractionCalibrationContext;
    FigCaptureSphereCalibrationContext *_sphereCalibrationContext;
    FigCaptureSphereEndStopCalibrationContext *_sphereEndStopCalibrationContext;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)initializeSharedInstance;

- (id)init;
- (void)_setupDuetTriggersAndScheduling;
- (void)_attemptToRunCalibrationForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 disableHistoryChecking:(_Bool)arg4 resultsBlock:(CDUnknownBlockType)arg5;
- (id)_createDefaultXPCSchedulingParametersWithInterval:(int)arg1 batteryLevel:(int)arg2;
- (void)_setupCalibrationForContext:(id)arg1;
- (void)_setupActivityAndTriggers:(const char *)arg1 interval:(int)arg2 batteryLevel:(int)arg3 calibrationBlock:(CDUnknownBlockType)arg4 isRepeating:(_Bool)arg5;
- (void)_setCalibrationShouldAbort:(_Bool)arg1;
- (void)_notifyOfDeviceMotion;
- (double)_getMagneticThresholdFromAttempt;
- (id)_runAndCreateDictionaryForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 errors:(unsigned int *)arg4;
- (_Bool)_calibrationShouldAbort;
- (void)_setupRepeatingCalibrationScheduling:(id)arg1 withCalibrationBlock:(CDUnknownBlockType)arg2;
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg1 devicePosition:(int)arg2;
- (id)autoFocusPositionSensorCalibrationData;
- (id)autoFocusCalibrationData;
- (id)apsSphereInteractionCalibrationData;
- (id)sphereCalibrationData;
- (id)sphereEndStopCalibrationData;

@end
