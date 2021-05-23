/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMappingModel, NSMutableArray, NSMutableDictionary, NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface _NSSQLiteStoreMigrator : NSObject

{
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLiteAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLiteConnection *_connection;
    NSArray *_tableGenerationSQL;
    NSArray *_existingTableNames;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    _Bool _hasPKTableChanges;
    NSMutableArray *_pkTableUpdateStatements;
    NSMutableDictionary *_attributeExtensionsToUpdate;
    NSMutableArray *_indexesToCreate;
    NSMutableArray *_indexesToDrop;
    NSMutableArray *_defaultValueStatements;
    NSMutableArray *_derivationsToDrop;
    NSMutableArray *_derivationsToRun;
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;
    NSMutableArray *_cloudKitUpdateStatements;
    _Bool _hasCloudKitTables;
}

@property (nonatomic, readonly) NSSQLiteAdapter *adapter;
@property (nonatomic, readonly) NSSQLModel *dstModel;
@property (nonatomic, readonly) NSSQLModel *srcModel;
@property (retain, nonatomic) NSMutableDictionary *historyMigrationCache;
@property (nonatomic) _Bool hasCloudKitTables;
@property (nonatomic, readonly) NSSQLiteConnection *connection;

+ (_Bool)_annotatesMigrationMetadata;
+ (void)_setAnnotatesMigrationMetadata:(_Bool)arg1;

- (void)dealloc;
- (void)_disconnect;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;
- (_Bool)performMigration:(id *)arg1;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (id)_originalRootsForAddedEntity:(id)arg1;
- (id)createEntityMigrationStatements;
- (id)createStatementsForUpdatingEntityKeys;
- (void)generatePKTableUpdateStatements;
- (_Bool)deleteStatementsForHistory;
- (id)updateStatementsForHistoryChanges;
- (_Bool)validateMigratedDataFromEntityMapping:(id)arg1 error:(id *)arg2;
- (long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2;
- (long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3;
- (_Bool)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id *)arg3;
- (_Bool)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id *)arg3;
- (void)_populateTableMigrationDescriptions;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (void)_determineAttributeTriggerToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3;
- (void)_determineRTreeExtensionsToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3;
- (void)_determineIndexesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (void)_determineUniquenessConstraintsToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (void)_determineDerivedAttributesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (CDUnknownBlockType)_indexMigrationBlockForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (_Bool)_sourceTableIsClean:(id)arg1;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3;
- (_Bool)shiftTombstones;
- (_Bool)clearTombstoneColumnsForRange:(struct _NSRange)arg1;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;

@end
