/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMSensorRecorder : NSObject

+ (long long)authorizationStatus;
+ (_Bool)isRecordingAvailableForType:(int)arg1;
+ (_Bool)isAccelerometerRecordingAvailable;
+ (_Bool)isGyroRecordingAvailable;
+ (_Bool)isPressureRecordingAvailable;
+ (_Bool)isAuthorizedForRecording;

- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;
- (id)sensorDataFromDate:(id)arg1 toDate:(id)arg2 forType:(int)arg3;
- (_Bool)validateTimesFromDate:(id *)arg1 toDate:(id)arg2;
- (_Bool)sendSensorDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 forType:(int)arg4;
- (void)recordDataType:(int)arg1 forDuration:(double)arg2;
- (id)accelerometerDataSinceId:(unsigned long long)arg1;
- (id)gyroDataSinceId:(unsigned long long)arg1;
- (id)pressureDataSinceId:(unsigned long long)arg1;
- (id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)gyroDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)pressureDataFromDate:(id)arg1 toDate:(id)arg2;
- (_Bool)sendAccelDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (_Bool)sendGyroDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (_Bool)sendPressureDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (void)recordAccelerometerForDuration:(double)arg1;
- (void)recordGyroForDuration:(double)arg1;
- (void)recordPressureForDuration:(double)arg1;
- (id)accelerometerDataFrom:(id)arg1 to:(id)arg2;
- (void)recordAccelerometerFor:(double)arg1;
- (id)accelerometerDataSince:(unsigned long long)arg1;
- (_Bool)setAccelSampleRate:(unsigned int)arg1;
- (_Bool)setGyroSampleRate:(unsigned int)arg1;
- (_Bool)setPressureSampleRate:(unsigned int)arg1;

@end
