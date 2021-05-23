/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureCalibrationContext.h>

@class NSMutableArray, NSMutableDictionary;

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext

{
    _Bool _shouldDeleteOldVersion;
    NSMutableDictionary *_iStopZEstimateDeltaHistory;
    double _previousAngleDelta;
    double _currentAngleDelta;
    NSMutableArray *_calibrationDataHistoryQueue;
    int _maxHistoryBuffer;
    _Bool _lastSuccessfulCalibrationWasDiscarded;
    _Bool _disableHistoryChecking;
    _Bool _supportsHistoryChecking;
    int _maxIStopZEstimateDifference;
    int _minCompassHeadingChange;
}

@property (nonatomic) _Bool disableHistoryChecking;

+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)setStatusForCalibrationData:(id)arg1 status:(int)arg2;

- (void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(_Bool)arg2 magneticFieldMagnitude:(double)arg3;
- (id)initWithSupportedDeviceNames:(id)arg1;
- (void)setLastSuccessfulCalibrationData:(id)arg1;
- (_Bool)_shouldRejectCalibrationData:(id)arg1;
- (void)_pushToCalibrationHistoryQueue:(id)arg1;
- (void)_updateIStopZEstimateDelta:(id)arg1;
- (void)_ensureIStopZEstimateDeltasForKey:(id)arg1;
- (_Bool)_calibrationDataIsWithinIStopZEstimateLimits:(id)arg1 basedOnCalibrationHistory:(id)arg2;
- (_Bool)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)arg1 basedOnCalibrationHistory:(id)arg2;
- (void)pushCalibrationDataToHistory:(id)arg1 isRejected:(_Bool *)arg2;
- (id)calibrationDataHistory;
- (id)_initForUnitTestsSupportsHistoryChecking:(_Bool)arg1;
- (int)passingIStopZEstimateDeltaForPosition:(id)arg1;
- (int)previousIStopZEstimateDeltaForPosition:(id)arg1;
- (int)currentIStopZEstimateDeltaForPosition:(id)arg1;
- (double)previousAngleDelta;
- (double)currentAngleDelta;

@end
