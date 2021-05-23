/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDeletedObjectEntity.h>

@interface HDDeletedSampleEntity : HDDeletedObjectEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long *)arg6 healthDatabase:(id)arg7 error:(id *)arg8 block:(CDUnknownBlockType)arg9;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (_Bool)isConcreteEntity;
+ (Class)_entityClassForDeletion;
+ (_Bool)enumerateDeletedSamplesWithType:(id)arg1 profile:(id)arg2 restrictedSourceEntities:(id)arg3 limit:(unsigned long long)arg4 anchor:(long long)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 inDatabase:(id)arg5 error:(id *)arg6;
+ (id)_externalSyncMetadataForRow:(struct HDSQLiteRow *)arg1;
+ (_Bool)insertCodableDeletedSamples:(id)arg1 provenance:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end
