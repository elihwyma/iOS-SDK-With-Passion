/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;
+ (_Bool)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)privateSubEntities;
+ (_Bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(_Bool)arg4 permitPendingAssociations:(_Bool)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id *)arg5;
+ (_Bool)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)_insertPendingAssociationForParentUUID:(id)arg1 childUUIDBytes:(unsigned char [16])arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)tableAliases;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (_Bool)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(_Bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2;
+ (_Bool)realizePendingAssociationsWithTransaction:(id)arg1 startingAnchor:(long long)arg2 error:(id *)arg3;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)deleteStatementForAssociationWithDatabase:(id)arg1;
+ (id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1;
+ (_Bool)_enumerateAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 lastSyncAnchor:(long long *)arg5 healthDatabase:(id)arg6 error:(id *)arg7 block:(CDUnknownBlockType)arg8;

@end
