/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HKDataFlowLink, HKWorkoutConfiguration, NSMutableArray, NSString, NSUUID;

@protocol HDWorkoutDataAccumulator;

@interface HDMockWorkoutDataDestination : NSObject

{
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_dataProcessorUUID;
    unsigned long long _workoutDataDestinationState;
    id <HDWorkoutDataAccumulator> workoutDataAccumulator;
    CDUnknownBlockType _sampleHandler;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _metadataHandler;
    NSMutableArray *_dataSources;
    HDProfile *_profile;
    HKWorkoutConfiguration *_workoutConfiguration;
}

@property (retain, nonatomic) NSMutableArray *dataSources;
@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (copy) CDUnknownBlockType sampleHandler;
@property (copy) CDUnknownBlockType eventHandler;
@property (copy) CDUnknownBlockType metadataHandler;
@property unsigned long long workoutDataDestinationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;
@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;

- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (id)initWithQueue:(id)arg1 profile:(id)arg2 workoutConfiguration:(id)arg3;

@end
