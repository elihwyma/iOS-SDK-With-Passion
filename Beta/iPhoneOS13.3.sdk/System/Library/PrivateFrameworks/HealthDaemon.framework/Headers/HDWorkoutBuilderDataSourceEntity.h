/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (_Bool)storeDataSourceWithIdentifier:(id)arg1 archivedState:(id)arg2 workoutBuilder:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)removeDataSourceWithIdentifier:(id)arg1 fromWorkoutBuilder:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateDataSourcesForWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;

@end
