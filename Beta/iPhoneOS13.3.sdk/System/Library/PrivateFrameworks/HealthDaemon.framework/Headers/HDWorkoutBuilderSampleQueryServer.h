/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDWorkoutBuilderServer, NSString, NSUUID;

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer

{
    _Bool _hasFinishedHistoricalFetch;
    NSUUID *_workoutBuilderIdentifier;
    HDWorkoutBuilderServer *_workoutBuilderServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)_queue_performHistoricalQuery;
- (id)workoutBuilderSampleQueryClientWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_queue_scheduleHistoricalQuery;
- (void)didCreateTaskServer:(id)arg1;
- (void)didInvalidateTaskServer:(id)arg1;
- (void)workoutBuilderServer:(id)arg1 addedSamples:(id)arg2;
- (_Bool)_shouldObserveOnPause;
- (_Bool)_shouldObserveDatabaseProtectedDataAvailability;

@end
