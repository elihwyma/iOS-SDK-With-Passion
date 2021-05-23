/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDWorkoutEventCollector.h>

@class CMSwimData, CMSwimTracker, NSDate, NSObject;

@protocol OS_dispatch_queue;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector

{
    CMSwimTracker *_swimTracker;
    CMSwimData *_referenceSwimData;
    CMSwimData *_lastSwimData;
    NSDate *_currentSegmentStartDate;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
}

+ (_Bool)isAvailableInCurrentHardware;

- (void)stop;
- (void)startWithSessionId:(id)arg1;
- (void)requestPendingEventsThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (_Bool)supportsWorkoutActivityType:(unsigned long long)arg1;
- (void)_queue_startCollectionWithSessionId:(id)arg1;
- (void)_queue_stopCollection;
- (void)_queue_addSegmentEventWithFallbackEndDate:(id)arg1;
- (void)_queue_querySwimDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_errorOccurred:(id)arg1;
- (void)_queue_processSwimData:(id)arg1 error:(id)arg2;
- (void)_queue_addLapEventForSwimData:(id)arg1;
- (void)_queue_addSegmentEventForSwimData:(id)arg1;

@end
