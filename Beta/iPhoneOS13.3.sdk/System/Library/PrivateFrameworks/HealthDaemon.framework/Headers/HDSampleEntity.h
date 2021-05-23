/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity

+ (id)indices;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)samplesWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 limit:(unsigned long long)arg5 anchor:(id *)arg6 error:(id *)arg7;
+ (long long)countOfSamplesWithType:(id)arg1 profile:(id)arg2 matchingPredicate:(id)arg3 withError:(id *)arg4;
+ (id)entityEnumeratorWithType:(id)arg1 profile:(id)arg2;
+ (id)mostRecentSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 anchor:(id *)arg5 error:(id *)arg6;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (long long)preferredEntityType;
+ (_Bool)requiresSampleTypePredicate;
+ (id)sourceIDsForSamplesWithType:(id)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)populatedSampleTypes:(id)arg1 inDateInterval:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(_Bool)arg3 database:(id)arg4 profile:(id)arg5 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletionContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (Class)_deletedEntityClass;
+ (Class)_entityClassForDeletion;
+ (id)oldestSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id *)arg5;
+ (id)maxAnchorForSamplesWithType:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (void)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 profile:(id)arg3 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id *)arg3 associatedObjectHandler:(CDUnknownBlockType)arg4;
+ (id)entityEnumeratorWithTypes:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)timePeriodsForSampleTypes:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sampleTypesForSamplesMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)anySampleOfType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id *)arg5;
+ (id)minimumSampleStartDateForProfile:(id)arg1 error:(id *)arg2;
+ (CDUnknownBlockType)objectInsertionFilterForProfile:(id)arg1;
+ (id)columnNamesForTimeOffset;
+ (id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2;

- (id)_sampleTypeInDatabase:(id)arg1;

@end
