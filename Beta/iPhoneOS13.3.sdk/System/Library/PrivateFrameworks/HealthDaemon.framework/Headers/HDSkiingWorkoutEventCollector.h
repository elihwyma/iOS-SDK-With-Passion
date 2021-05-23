/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDWorkoutEventCollector.h>

@class CMSkiData, CMSkiTracker, NSObject;

@protocol OS_dispatch_queue;

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector

{
    CMSkiTracker *_skiTracker;
    CMSkiData *_referenceSkiData;
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
- (void)_queue_errorOccurred:(id)arg1;
- (void)_queue_querySkiDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_processSkiData:(id)arg1 error:(id)arg2;
- (void)_queue_generateSegmentEventForSkiData:(id)arg1 referenceData:(id)arg2;
- (id)_queue_generateDownhillSnowSportsDistanceSampleForSkiData:(id)arg1 referenceData:(id)arg2;
- (void)_queue_saveDownhillSnowSportsDistanceSamples:(id)arg1;
- (double)_percentSlopeForAngle:(double)arg1;

@end
