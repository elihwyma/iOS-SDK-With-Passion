/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutSessionControllerEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)uniquedColumns;
+ (id)_predicateForRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2;
+ (_Bool)storeArchivedStateWithRecoveryIdentifier:(id)arg1 archivedState:(id)arg2 workoutSession:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)retrieveArchivedStateFromRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2 transaction:(id)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;

@end
