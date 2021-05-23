/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSSQLTableMigrationDescription : NSObject

{
    NSSQLEntity *_rootEntity;
    NSSQLEntity *_sourceRootEntity;
    int _migrationType;
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_copiedEntityMigrations;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableDictionary *_migrationByEntity;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableDictionary *_tempTableNames;
    NSNumber *_hasComplexSchemaTransformations;
    NSMutableSet *_addedColumnSet;
    NSMutableSet *_renamedColumnSet;
    NSMutableSet *_renamedMTMSet;
    NSMutableSet *_raisedColumnSet;
    NSMutableSet *_droppedEntitySet;
    NSMutableSet *_columnsUpgradedToMandatory;
}

@property (nonatomic, readonly) int migrationType;
@property (nonatomic, readonly) NSSQLEntity *rootEntity;

- (void)dealloc;
- (id)description;
- (id)newCloudKitMetadataUpdateStatements;
- (id)_addedManyToManys;
- (id)_removedManyToManys;
- (id)_transformedManyToManys;
- (id)_sourceRootEntity;
- (_Bool)_doAttributesHaveChangesRequiringCopyForMigration:(id)arg1 withContext:(struct _NSSQLMigrationContext)arg2;
- (_Bool)_doRelationshipsHaveChangesRequiringCopyForMigration:(id)arg1 inContext:(struct _NSSQLMigrationContext)arg2;
- (void)_determineSchemaTransformationComplexityInMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (_Bool)_hasComplexSchemaTransformationsInMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (id)_tempNameForTableName:(id)arg1;
- (id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(_Bool)arg4 migrationContext:(struct _NSSQLMigrationContext)arg5;
- (id)createDefaultValuePopulationStatementsForAddedColumnsEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (id)_retainedRemovedSubEntitiesOfEntity:(id)arg1;
- (id)initWithRootEntity:(id)arg1 migrationType:(int)arg2;
- (void)addEntityMigrationDescription:(id)arg1;
- (void)appendStatementsToRenameTables:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)appendDefaultValueStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;

@end
