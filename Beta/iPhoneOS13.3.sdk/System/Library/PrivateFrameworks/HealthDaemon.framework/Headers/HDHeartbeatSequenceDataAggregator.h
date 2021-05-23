/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDHeartbeatSequenceDataAggregator : HDPassiveDataAggregator

- (id)objectType;
- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (_Bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (id)_metadataForSensorDatum:(id)arg1;
- (_Bool)_associateSubsampleFromSensorDatum:(id)arg1 sampleUUID:(id)arg2 error:(id *)arg3;

@end
