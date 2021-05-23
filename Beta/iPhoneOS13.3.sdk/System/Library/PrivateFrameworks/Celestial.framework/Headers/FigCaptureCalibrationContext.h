/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface FigCaptureCalibrationContext : NSObject

{
    NSMutableDictionary *_lastSuccessfulCalibrationData;
    double _lastSuccessfulCalibrationTimeStamp;
    CDStruct_31142d93 _lastSuccessfulCalibrationMagneticField;
    NSString *_activityName;
    NSString *_preferenceString;
    NSString *_propertyName;
    unsigned long long _expectedDataSize;
    int _interval;
    int _minimumBatteryLevelToRun;
    NSString *_internalLogName;
    NSArray *_supportedDevices;
}

@property (retain, nonatomic) NSDictionary *lastSuccessfulCalibrationData;
@property (nonatomic) double lastSuccessfulCalibrationTimeStamp;
@property (nonatomic) CDStruct_31142d93 lastSuccessfulCalibrationMagneticField;
@property (nonatomic, readonly) NSString *activityName;
@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) unsigned long long expectedDataSize;
@property (nonatomic, readonly) int interval;
@property (nonatomic, readonly) int minimumBatteryLevelToRun;

+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)setStatusForCalibrationData:(id)arg1 status:(int)arg2;

- (id)initWithPreferenceString:(id)arg1 withActivityName:(id)arg2 withPropertyName:(id)arg3 withExpectedDataSize:(unsigned long long)arg4 withInterval:(int)arg5 withMinimumBatteryLevel:(int)arg6 withInternalLogName:(id)arg7 supportedDeviceNames:(id)arg8;
- (void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(_Bool)arg2 magneticFieldMagnitude:(double)arg3;
- (id)initWithSupportedDeviceNames:(id)arg1;
- (void)pushCalibrationDataToHistory:(id)arg1 isRejected:(_Bool *)arg2;
- (id)calibrationDataHistory;
- (void)updateWithNewCalibrationData:(id)arg1 orExternalErrors:(unsigned int)arg2 magneticFieldAttempts:(int)arg3 magneticField:(CDStruct_31142d93)arg4 isCalibrationValid:(_Bool *)arg5 calibrationStatus:(unsigned int *)arg6;
- (unsigned int)_updateAndStashCalibrationData:(id)arg1 externalErrors:(unsigned int)arg2 hasFirmwareErrors:(_Bool)arg3 magneticFieldAttempts:(int)arg4 magneticField:(CDStruct_31142d93)arg5;
- (void)_writeCalibrationDataToInternalLogFile:(id)arg1 magneticField:(CDStruct_31142d93)arg2;
- (id)_createDictionaryForFailureOutsideFirmwareWithReasons:(unsigned int)arg1;

@end
