/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDAppleExerciseTimeDataAggregator : HDPassiveDataAggregator

- (id)objectType;
- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;

@end
