/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureCalibrationContext.h>

@interface FigCaptureSphereCalibrationContext : FigCaptureCalibrationContext

+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;

- (void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(_Bool)arg2 magneticFieldMagnitude:(double)arg3;
- (id)initWithSupportedDeviceNames:(id)arg1;

@end
