/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (_Bool)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1;
+ (id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id *)arg2;
+ (_Bool)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id *)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (Class)workoutEventClass;

@end
