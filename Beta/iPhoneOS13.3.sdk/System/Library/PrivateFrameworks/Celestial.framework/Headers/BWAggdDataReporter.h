/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface BWAggdDataReporter : NSObject

{
    NSObject<OS_dispatch_queue> *_aggdDispatchQueue;
    int _lastShutterLag;
}

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)reportCalibrationStatisticsWithTime:(id)arg1 timeValue:(double)arg2 attemptsField:(id)arg3 attemptsValue:(long long)arg4 successField:(id)arg5 successValue:(long long)arg6 magneticFieldMagnitudeField:(id)arg7 magneticFieldMagnitudeValue:(double)arg8;
- (void)reportAPSSphereInteractionCalibrationForPosition:(int)arg1 residualErrorNeutral:(float)arg2 calibrationZHeightNeutral:(float)arg3 residualErrorMacro:(float)arg4 calibrationZHeightMacro:(float)arg5 calibrationStatus:(unsigned int)arg6 isValid:(_Bool)arg7;
- (void)reportISPCreateDuration:(int)arg1;
- (void)reportAutoFocusPositionSensorCalibrationForPosition:(int)arg1 iStopZEstimate:(int)arg2 eSensorOutput:(short)arg3 wSensorOutput:(short)arg4 gravityZ:(int)arg5 calibrationStatus:(unsigned int)arg6 sensorTemp:(short)arg7 successfulInfinityEndStopDelta:(int)arg8 currentInfinityEndStopDelta:(int)arg9 previousInfinityEndStopDelta:(int)arg10 currentAngleDelta:(int)arg11 previousAngleDelta:(int)arg12 factoryCalibrationOffset:(int *)arg13 estimatedNeutralZ:(int *)arg14 deltaNeutralZFromNVM:(int *)arg15 estimatedSagZ:(int *)arg16 combinedSensorOutput:(int *)arg17 deltaSagFromNVM:(int *)arg18 isValid:(_Bool)arg19 dataWasRejectedByHistory:(_Bool)arg20;
- (void)reportSphereCalibrationForPosition:(int)arg1 freqX:(float)arg2 deltaFreqX:(float)arg3 qX:(float)arg4 deltaQX:(float)arg5 gainX:(float)arg6 freqY:(float)arg7 deltaFreqY:(float)arg8 qY:(float)arg9 deltaQY:(float)arg10 gainY:(float)arg11 calibrationStatus:(unsigned int)arg12 isValid:(_Bool)arg13;
- (void)reportCameraLaunchWithPrewarm:(int)arg1 reason:(id)arg2;
- (void)reportCameraLaunchWithoutPrewarm:(int)arg1;
- (void)reportCameraStreamingTimeInMilliseconds:(unsigned long long)arg1 deviceType:(int)arg2 devicePosition:(int)arg3;
- (void)reportPearlInfraredProjectorUptime:(unsigned long long)arg1 current:(int)arg2 pattern:(int)arg3 applicationID:(id)arg4;
- (void)reportAutoFocusPositionSensorMode:(int)arg1 portType:(id)arg2;
- (void)reportAPSOffsetEstimatorForPortType:(id)arg1 accelMotion:(float)arg2 gyroMotion:(float)arg3 inSessionOffset:(float)arg4 deltaOffsetFC:(float)arg5 deltaOffsetMI:(float)arg6 deltaOffsetFATP:(float)arg7 deltaOffsetLastSession:(float)arg8 errorHeadroomViolated:(_Bool)arg9 errorConvergenceFailed:(_Bool)arg10 errorMotionTooLarge:(_Bool)arg11 errorConfidenceTooLow:(_Bool)arg12 errorOffsetTooLarge:(_Bool)arg13 errorDeltaTooLarge:(_Bool)arg14 errorSaturated:(_Bool)arg15 errorCouldNotRun:(_Bool)arg16 successRun:(_Bool)arg17 startAPSVoltage:(int)arg18 modeGCOL:(_Bool)arg19 modeOL:(_Bool)arg20;
- (void)reportStillImageAPSStatisticsForPortType:(id)arg1 logicalFocusPosition:(int)arg2 apsMotion:(float)arg3 sphereMotion:(float)arg4 accelMotion:(float)arg5 gyroMotion:(float)arg6 subjectDistance:(float)arg7 luxLevel:(int)arg8;
- (void)reportVideoRecordingAPSStatistics:(float)arg1 stdDataFromAPSForTele:(float)arg2 stdDataFromSphereForWide:(float)arg3 stdDataFromSphereForTele:(float)arg4 stdDataFromAccel:(float)arg5 stdDataFromGyro:(float)arg6 maxDataFromAPSForWide:(float)arg7 maxDataFromAPSForTele:(float)arg8 minDataFromAPSForWide:(float)arg9 minDataFromAPSForTele:(float)arg10 maxDataFromSphereForWide:(float)arg11 maxDataFromSphereForTele:(float)arg12 minDataFromSphereForWide:(float)arg13 minDataFromSphereForTele:(float)arg14 maxDataFromAccel:(float)arg15 minDataFromAccel:(float)arg16 maxDataFromGyro:(float)arg17 minDataFromGyro:(float)arg18;
- (void)reportAutoFocusCalibrationForPosition:(int)arg1 freqZ:(int)arg2 deltaFreqZ:(int)arg3 qZ:(int)arg4 deltaQZ:(int)arg5 gainZ:(int)arg6 calibrationStatus:(unsigned int)arg7 gelModelCoefficientD1:(int *)arg8 gelModelCoefficientD2:(int *)arg9 gelModelCoefficientP1:(int *)arg10 gelModelCoefficientP2:(int *)arg11 isValid:(_Bool)arg12;
- (id)_aggdCameraStreamingTimeStringFromDeviceType:(int)arg1 devicePosition:(int)arg2;
- (void)_incrementAggdScalarKey:(id)arg1 withValue:(long long)arg2;
- (id)_aggdPearlInfraredProjectorUptimeStringFromCurrent:(int)arg1 pattern:(int)arg2 applicationID:(id)arg3;
- (void)_pushValue:(double)arg1 aggdDistributionKey:(id)arg2;
- (id)_aggdGNRProcessingStatusStringFromProcessingStatus:(int)arg1;
- (id)_aggdStereoFusionProcessingTypeStringForCaptureType:(int)arg1 isStereoFusionCapture:(_Bool)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(_Bool)arg5;
- (id)_aggdStereoFusionProcessingStatusStringFromProcessingStatus:(int)arg1;
- (id)_aggdSDOFProcessingStatusStringFromProcessingStatus:(int)arg1;
- (id)_aggdStringForPrefix:(id)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(_Bool)arg6 frontCamera:(_Bool)arg7;
- (void)_reportInitFailure;
- (void)_setAggdScalarKey:(id)arg1 withValue:(long long)arg2;
- (id)_captureTypeStringWithPrimaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4;
- (void)reportGNRSampleBufferProcessorProcessingStatus:(int)arg1;
- (void)reportStereoFusionProcessingTypeForCaptureType:(int)arg1 isStereoFusionCapture:(_Bool)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(_Bool)arg5;
- (void)reportStereoFusionSampleBufferProcessorProcessingStatus:(int)arg1;
- (void)reportSDOFSampleBufferProcessorProcessingStatus:(int)arg1;
- (void)reportLuxLevel:(unsigned int)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(_Bool)arg6 frontCamera:(_Bool)arg7;
- (void)reportZoomFactor:(float)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(_Bool)arg6 frontCamera:(_Bool)arg7;
- (void)reportNonCameraAppCaptureWithPrimaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 stillDuringVideo:(_Bool)arg5 frontCamera:(_Bool)arg6;
- (void)reportCameraAppCaptureForNonCameraAppLoggingWithFrontCamera:(_Bool)arg1;
- (void)reportFaceCount:(unsigned int)arg1 frontCamera:(_Bool)arg2;
- (void)reportSensorTemperature:(unsigned int)arg1 frontCamera:(_Bool)arg2;
- (void)reportShutterLag:(CDStruct_1b6d18a9)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 stillDuringVideo:(_Bool)arg6 frontCamera:(_Bool)arg7;
- (int)lastShutterLag;
- (void)reportZeroShutterLagFirmwareTimeMachineInitFailure;
- (void)reportZeroShutterLagPreviewTimeMachineInitFailure;
- (void)reportZeroShutterLagSphereInitFailure;
- (void)reportZeroShutterLagMetadataInitFailureWithReasons:(unsigned int)arg1;
- (void)reportZeroShutterLagInitSuccess;
- (void)reportZeroShutterLagReferenceFrameSelectionFailureForCaptureType:(int)arg1;
- (void)reportZeroShutterLagSuccess;
- (void)reportSphereEndStopCalibrationForPosition:(int)arg1 oisPositiveX:(int)arg2 oisNegativeX:(int)arg3 oisPositiveY:(int)arg4 oisNegativeY:(int)arg5 maxPositiveXDriftFromNVM:(int)arg6 maxNegativeXDriftFromNVM:(int)arg7 maxPositiveYDriftFromNVM:(int)arg8 maxNegativeYDriftFromNVM:(int)arg9 sphereStrokeX:(int)arg10 sphereStrokeY:(int)arg11 calibrationStatus:(unsigned int)arg12 isValid:(_Bool)arg13;
- (void)reportCriticalFocusErrorOccurredForPortType:(id)arg1;
- (void)reportSphereJitterDetectionsForPortType:(id)arg1 detectionAttemps:(int)arg2 successfulDetections:(int)arg3;

@end
