/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class HKDataFlowLink, NSUUID;

@protocol HDWorkoutDataSource <Swift>

@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;

- (unsigned short)workoutDataDestination:requestsDataFrom:to: /* Error: Ran out of types for this method. */;
- (unsigned short)workoutDataDestination:didChangeFromState:toState: /* Error: Ran out of types for this method. */;
- (unsigned short)workoutDataDestination:requestsFinalDataFrom:to:completion: /* Error: Ran out of types for this method. */;

@end
