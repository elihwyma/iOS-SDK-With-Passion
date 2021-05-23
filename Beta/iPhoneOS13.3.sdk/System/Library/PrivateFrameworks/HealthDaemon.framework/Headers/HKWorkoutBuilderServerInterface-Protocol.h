/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HKWorkoutBuilderServerInterface <Swift>

- (unsigned short)remote_setTargetConstructionState:startDate:endDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addSamples:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addWorkoutEvents:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_updateDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setStatisticsMergeStrategy:forType: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setStatisticsComputationMethod:forType: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addDataSourcesWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeDataSourcesWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_recoverWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setShouldCollectEvents: /* Error: Ran out of types for this method. */;

@end
