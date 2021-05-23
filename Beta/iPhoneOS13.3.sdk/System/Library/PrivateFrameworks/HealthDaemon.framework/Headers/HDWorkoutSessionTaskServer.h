/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDWorkoutBuilderEntity, HDWorkoutSessionServer, HKDataFlowLink, HKSource, HKWorkoutSessionTaskConfiguration, NSObject, NSString, NSUUID;

@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDWorkoutSessionTaskServer : HDStandardTaskServer

{
    NSObject<OS_dispatch_queue> *_queue;
    HKWorkoutSessionTaskConfiguration *_taskConfiguration;
    HDWorkoutSessionServer *_sessionServer;
    HKDataFlowLink *_workoutDataFlowLink;
    HDWorkoutBuilderEntity *_builderEntity;
    HKSource *_clientSource;
    id <HDWorkoutDataAccumulator> _accumulator;
}

@property (weak) id <HDWorkoutDataAccumulator> accumulator;
@property (nonatomic, readonly) _Bool requiresCoreLocationAssertion;
@property (nonatomic, readonly) _Bool supportsAppRelaunchForRecovery;
@property (copy, nonatomic, readonly) HKSource *clientSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionConfigured;
- (void)remote_setTargetState:(long long)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 clientSource:(id)arg4 delegate:(id)arg5 sessionServer:(id)arg6;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (void)_queue_setupSessionServer;
- (void)observeWorkoutSessionServer:(id)arg1;

@end
