/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSSQLCore, PFCloudKitMetadataMigrationContext;

__attribute__((visibility("hidden")))
@interface PFCloudKitMetadataModelMigrator : NSObject

{
    NSSQLCore *_store;
    NSManagedObjectContext *_metadataContext;
    PFCloudKitMetadataMigrationContext *_context;
}

@property (nonatomic, readonly) NSSQLCore *store;
@property (nonatomic, readonly) NSManagedObjectContext *metadataContext;
@property (nonatomic, readonly) PFCloudKitMetadataMigrationContext *context;

- (void)dealloc;
- (id)initWithStore:(id)arg1 metadataContext:(id)arg2;
- (_Bool)checkAndPerformMigrationIfNecessary:(id *)arg1;
- (_Bool)computeAncillaryEntityPrimaryKeyTableEntriesForStore:(id)arg1 error:(id *)arg2;
- (void)addDropTableStatementsForOldMetadataTablesToContext:(id)arg1 withAdapter:(id)arg2;
- (id)fetchSchemaSQLForEntity:(id)arg1 usingConnection:(id)arg2;
- (void)addMigrationStatementToContext:(id)arg1 forRenamingAttributeNamed:(id)arg2 withOldColumnName:(id)arg3 toAttributeName:(id)arg4 onOldSQLEntity:(id)arg5 andCurrentSQLEntity:(id)arg6;
- (_Bool)addMigrationStatementsToDeleteDuplicateMirroredRelationshipsToContext:(id)arg1 withManagedObjectContext:(id)arg2 andSQLEntity:(id)arg3 error:(id *)arg4;
- (void)addMigrationStatementForAddingAttribute:(id)arg1 toContext:(id)arg2 inStore:(id)arg3;
- (_Bool)checkForCorruptedRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)cleanUpAfterClientMigrationWithStore:(id)arg1 andContext:(id)arg2 error:(id *)arg3;
- (_Bool)migrateMetadataForObjectsInStore:(id)arg1 toNSCKRecordMetadataUsingContext:(id)arg2 error:(id *)arg3;
- (_Bool)checkForRecordMetadataZoneCorruptionInStore:(id)arg1 error:(id *)arg2;
- (_Bool)prepareContextWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)calculateMigrationStepsWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)applyMigrationChangesWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)commitMigrationMetadataAndCleanup:(id *)arg1;
- (_Bool)migrateBatchOfObjects:(id)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id *)arg4;

@end
