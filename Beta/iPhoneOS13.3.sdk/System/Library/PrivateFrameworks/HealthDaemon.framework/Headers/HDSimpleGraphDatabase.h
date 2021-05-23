/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteDatabase, NSString;

@protocol OS_dispatch_queue;

@interface HDSimpleGraphDatabase : NSObject

{
    HDSQLiteDatabase *_database;
    NSString *_databasePath;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HDSQLiteDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSString *databasePath;

+ (id)tableCreateSQL;
+ (id)indexCreateSQL;
+ (id)indexDropSQL;
+ (id)graphDatabaseWithBackingStore:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (void)close;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)work_getRelationshipsForNodeWithID:(long long)arg1 relationships:(id)arg2 fetchType:(long long)arg3 error:(id *)arg4;
- (id)work_nodeForID:(long long)arg1 error:(id *)arg2;
- (_Bool)_work_addAttributeToNodeWithID:(long long)arg1 key:(id)arg2 value:(id)arg3 valueType:(id)arg4 error:(id *)arg5;
- (_Bool)work_insertNewValueTypeIfNeeded:(id)arg1 error:(id *)arg2;
- (_Bool)_work_addAttributeToNodeWithID:(long long)arg1 keyID:(long long)arg2 value:(id)arg3 valueType:(id)arg4 error:(id *)arg5;
- (id)work_attributesForNodeWithID:(long long)arg1 error:(id *)arg2;
- (_Bool)performWork:(CDUnknownBlockType)arg1 usingTransaction:(_Bool)arg2 error:(id *)arg3;
- (void)_work_attemptDeleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)work_validateExistingDatabaseVersion;
- (_Bool)work_createTablesIfNeededWithError:(id *)arg1;
- (_Bool)work_createIndicesIfNeededwithError:(id *)arg1;
- (void)_work_close;
- (_Bool)_work_openDatabaseAtURL:(id)arg1 error:(id *)arg2;
- (long long)work_firstRowIDForNodeNamed:(id)arg1 error:(id *)arg2;
- (id)work_addNodeWithName:(id)arg1 error:(id *)arg2;
- (id)work_nodesForIDs:(id)arg1 error:(id *)arg2;
- (id)work_addNodesWithNames:(id)arg1 error:(id *)arg2;
- (long long)_work_countOfObjectsInTable:(id)arg1;
- (_Bool)_work_doesNamedRowExist:(id)arg1 inTable:(id)arg2;
- (id)work_nodesForNames:(id)arg1 error:(id *)arg2;
- (_Bool)work_deleteNodesWithIDs:(id)arg1 error:(id *)arg2;
- (_Bool)_work_deleteObjectsFromTable:(id)arg1 withIDs:(id)arg2 error:(id *)arg3;
- (_Bool)work_insertNewRelationshipIfNeededNamed:(id)arg1;
- (long long)work_getIDForRelationshipName:(id)arg1 error:(id *)arg2;
- (long long)work_uniquedNodeWithName:(id)arg1 error:(id *)arg2;
- (_Bool)work_deleteRelationshipsWithIDs:(id)arg1 error:(id *)arg2;
- (_Bool)work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 error:(id *)arg3;
- (_Bool)_work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 toNodeNamed:(id)arg3 error:(id *)arg4;
- (long long)work_rowIDForValueType:(id)arg1 error:(id *)arg2;
- (_Bool)work_insertNewKeyIfNeeded:(id)arg1 error:(id *)arg2;
- (long long)work_getIDForKeyName:(id)arg1 error:(id *)arg2;
- (void)_work_beginTransaction;
- (void)_work_endTransaction:(_Bool)arg1;
- (_Bool)_performWork:(CDUnknownBlockType)arg1 usingTransaction:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_openDatabaseError:(id *)arg1;
- (_Bool)_work_createGraphDatabaseIfNeededWithError:(id *)arg1;
- (void)attemptDeleteWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)attemptDelete;
- (_Bool)work_dropIndicesWithError:(id *)arg1;
- (id)work_userVersionWithError:(id *)arg1;
- (id)work_makeNodeWithName:(id)arg1 error:(id *)arg2;
- (long long)work_countOfNodesWithRelationship:(long long)arg1 error:(id *)arg2;
- (long long)work_countOfNodes;
- (_Bool)work_doesNodeExist:(id)arg1;
- (id)work_nodeForName:(id)arg1;
- (_Bool)work_deleteNodeWithID:(long long)arg1 error:(id *)arg2;
- (id)work_nodesContainingAttributeWithID:(long long)arg1 limit:(long long)arg2 withValue:(id)arg3 error:(id *)arg4;
- (id)work_nodesContainingAttribute:(id)arg1 withValue:(id)arg2 error:(id *)arg3;
- (_Bool)work_deleteAllRelationshipsWithName:(id)arg1 withError:(id *)arg2;
- (id)work_allNodesWithFromRelationshipID:(long long)arg1 error:(id *)arg2;
- (id)work_nodesWithRelationshipOfType:(long long)arg1 toNodeWithID:(long long)arg2 error:(id *)arg3;
- (id)work_nodeNameForAttributeWithKeyID:(long long)arg1 value:(id)arg2 error:(id *)arg3;
- (_Bool)work_doesRelationshipNameExist:(id)arg1;
- (long long)work_countOfRelationships;
- (long long)work_countOfRelationshipOfType:(long long)arg1 fromNodeWithID:(long long)arg2 error:(id *)arg3;
- (_Bool)work_addRelationshipNamed:(id)arg1 fromNodeNamed:(id)arg2 toNodeNamed:(id)arg3 error:(id *)arg4;
- (_Bool)work_addRelationshipNamed:(id)arg1 fromNodeWithID:(long long)arg2 toNodeWithID:(long long)arg3 error:(id *)arg4;
- (_Bool)work_deleteRelationshipWithID:(long long)arg1 error:(id *)arg2;
- (_Bool)work_deleteRelationship:(id)arg1 fromNodeWithID:(long long)arg2 error:(id *)arg3;
- (_Bool)_work_deleteRelationships:(id)arg1 toNodeWithName:(id)arg2 error:(id *)arg3;
- (_Bool)work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 toNodeNamed:(id)arg3 error:(id *)arg4;
- (_Bool)work_deleteAllRelationshipsOfTypes:(id)arg1 error:(id *)arg2;
- (_Bool)work_doesKeyExist:(id)arg1;
- (_Bool)work_doesValueTypeExist:(id)arg1;
- (id)work_attributesForNodeWithID:(long long)arg1 matchingKey:(id)arg2 error:(id *)arg3;
- (_Bool)work_doesNodeExistWithTwoMatchingAttributesFirstKey:(long long)arg1 firstValue:(id)arg2 secondKey:(long long)arg3 secondValue:(id)arg4 exists:(_Bool *)arg5 error:(id *)arg6;
- (_Bool)work_deleteAttributesFromNodeNamed:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)work_deleteAllAttributesFromNodeNamed:(id)arg1 error:(id *)arg2;
- (id)work_metadataValueForKey:(id)arg1;
- (_Bool)work_setMetadataValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)performWork:(CDUnknownBlockType)arg1 usingTransaction:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_work_nodesWithRelationship:(id)arg1 toNodeWithID:(id)arg2 reversed:(_Bool)arg3 error:(id *)arg4;
- (id)work_nodesWithRelationship:(id)arg1 toNodeWithID:(id)arg2 error:(id *)arg3;
- (id)work_nodesWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 error:(id *)arg3;
- (_Bool)work_changeRelationshipWithNameID:(long long)arg1 subjectID:(long long)arg2 toSampleWithUUID:(id)arg3 withNewNameID:(long long)arg4 error:(id *)arg5;

@end
