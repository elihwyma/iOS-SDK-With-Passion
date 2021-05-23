/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDWorkoutSessionServer, NSLock, NSString;

@interface HDWorkoutObserverServer : HDStandardTaskServer

{
    _Bool _registered;
    HDWorkoutSessionServer *_currentWorkout;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_startTaskServerIfNeeded;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)workoutDataAccumulator:(id)arg1 didUpdateEvents:(id)arg2;
- (void)workoutDataAccumulator:(id)arg1 didUpdateStartDate:(id)arg2;
- (void)_sendSnapshotForWorkout:(id)arg1;
- (void)workoutManager:(id)arg1 didUpdateCurrentWorkout:(id)arg2;
- (void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didChangeToState:(long long)arg3;
- (void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didUpdateDataAccumulator:(id)arg3;

@end
