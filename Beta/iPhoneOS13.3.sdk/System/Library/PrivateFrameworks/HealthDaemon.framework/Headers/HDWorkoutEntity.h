/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleEntity.h>

@interface HDWorkoutEntity : HDSampleEntity

+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (_Bool)isConcreteEntity;
+ (_Bool)copySampleAssociationsFromWorkout:(id)arg1 toWorkout:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (id)_codableCondensedWorkoutProperties;
+ (_Bool)enumerateCondensedWorkoutsWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;

- (_Bool)updateCondenserVersion:(long long)arg1 date:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (_Bool)isCondenserVersionLessThan:(long long)arg1 transaction:(id)arg2;
- (_Bool)getCondenserVersion:(out long long *)arg1 date:(out id *)arg2 profile:(id)arg3 error:(id *)arg4;
- (id)codableCondensedWorkoutWithTransaction:(id)arg1 error:(id *)arg2;

@end
