/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleEntity.h>

@interface HDFitnessFriendWorkoutEntity : HDSampleEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (_Bool)isConcreteEntity;
+ (id)HDDataEntityPredicateForFriendUUID:(id)arg1;
+ (id)samplesAfterAnchor:(id *)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)samplesForFriend:(id)arg1 anchor:(id *)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateWorkoutsWithPredicate:(id)arg1 anchor:(id *)arg2 profile:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

@end
