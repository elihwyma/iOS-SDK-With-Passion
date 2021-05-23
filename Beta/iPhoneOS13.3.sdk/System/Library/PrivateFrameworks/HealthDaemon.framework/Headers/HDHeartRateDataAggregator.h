/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataAggregator.h>

@interface HDHeartRateDataAggregator : HDDataAggregator

- (void)dealloc;
- (id)objectType;
- (id)initWithDataCollectionManager:(id)arg1;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)configurationForCollector:(id)arg1;
- (void)workoutManagerStateChanged:(id)arg1;
- (_Bool)_shouldRequestActiveCollectionForConfiguration:(id)arg1;
- (void)_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4;
- (id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2;

@end
