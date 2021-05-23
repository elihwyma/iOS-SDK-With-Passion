/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDLocationDataCollector, HDWorkoutSessionServer, HKDataFlowLink, HKQuantity, HKUnit, NSObject, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HDWorkoutRouteDataSource : HDStandardTaskServer

{
    HDWorkoutSessionServer *_sessionServer;
    HDLocationDataCollector *_locationDataCollector;
    HKDataFlowLink *_workoutDataFlowLink;
    HKUnit *_elevationUnit;
    HKQuantity *_currentElevation;
    HKQuantity *_latestAltitude;
    NSUUID *_workoutUUID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)remote_setupWithSessionIdentifier:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_setupLocationDataCollector;
- (id)_workoutBuilderServer;
- (id)_queue_createLocationDataCollectorWithActivityType:(unsigned long long)arg1 workoutUUID:(id)arg2;
- (void)_queue_recoverCurrentElevation;
- (void)elevationUpdated:(unsigned long long)arg1;
- (void)workoutRouteUpdated:(id)arg1;
- (void)altitudeUpdated:(double)arg1;
- (id)_unitTest_locationDataCollector;

@end
