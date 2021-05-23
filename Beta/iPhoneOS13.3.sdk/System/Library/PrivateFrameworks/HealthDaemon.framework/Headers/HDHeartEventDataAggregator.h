/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDHeartEventDataAggregator : HDPassiveDataAggregator

- (id)_categoryType;
- (id)objectType;
- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (_Bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;

@end
