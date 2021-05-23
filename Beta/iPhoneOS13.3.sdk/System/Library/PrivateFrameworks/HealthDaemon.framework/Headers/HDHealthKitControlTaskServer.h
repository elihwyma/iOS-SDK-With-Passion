/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@interface HDHealthKitControlTaskServer : HDStandardTaskServer

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_condensedWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_condensableWorkoutsWithCompletion:(CDUnknownBlockType)arg1;

@end
