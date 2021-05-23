/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataAggregator.h>

@interface HDPassiveDataAggregator : HDDataAggregator

- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;

@end
