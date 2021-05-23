/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDWorkoutBasicDataSource, HKDataFlowLink, HKWorkoutDataSourceConfiguration, NSSet, NSString, NSUUID;

@protocol HDWorkoutDataAccumulator;

@interface HDGymKitDataSource : HDStandardTaskServer

{
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    HKDataFlowLink *_workoutDataFlowLink;
    NSSet *_machineSourceTypes;
    NSSet *_localDevicePreferredTypes;
}

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

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_setDataSourceConfiguration:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)quantityTypesToIncludeWhilePaused;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)_setupTypes;
- (_Bool)_shouldAddSample:(id)arg1;

@end
