/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class HDFitnessMachineManager, HDWorkoutManager, NSString, NSUUID;

@interface HDWorkoutServer : HDSubserver

{
    HDWorkoutManager *_workoutManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    NSUUID *_fitnessMachineConnectionUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)remote_finishAllWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_generatePauseOrResumeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_recoverActiveWorkoutSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)remote_simulateAccept;
- (void)remote_simulateDisconnect;
- (void)remote_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_endFitnessMachineConnectionWithUUID:(id)arg1;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_markClientReadyWithConnectionUUID:(id)arg1;
- (id)diagnosticDescription;
- (id)initWithParentServer:(id)arg1;
- (CDUnknownBlockType)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
