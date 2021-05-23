/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataCollector.h>

@interface HDLiveDataCollector : HDDataCollector

- (void)_queue_beginStreaming;
- (void)_queue_handleSensorDatum:(id)arg1 context:(id)arg2;
- (void)beginUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)hkObjectsFromSensorDatum:(id)arg1 context:(id)arg2;

@end
