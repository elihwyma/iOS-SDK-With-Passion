/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class HKDataFlowLink, NSUUID;

@protocol HDWorkoutDataAccumulator;

@protocol HDWorkoutDataDestination <Swift>

@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;

- (unsigned short)addSamples:dataSource: /* Error: Ran out of types for this method. */;
- (unsigned short)addWorkoutEvents:dataSource: /* Error: Ran out of types for this method. */;
- (unsigned short)addMetadata:dataSource: /* Error: Ran out of types for this method. */;

@end
