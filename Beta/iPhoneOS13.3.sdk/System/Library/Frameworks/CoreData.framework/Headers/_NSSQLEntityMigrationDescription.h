/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityMapping, NSMutableArray, NSMutableDictionary, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSSQLEntityMigrationDescription : NSObject

{
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSSQLEntity *_dstEntity;
    NSSQLEntity *_srcEntity;
    int _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
    _Bool _updateUsingCopy;
}

@property (nonatomic, readonly) NSSQLEntity *sourceEntity;
@property (nonatomic, readonly) NSSQLEntity *destinationEntity;
@property (nonatomic, readonly) NSEntityMapping *entityMapping;
@property (nonatomic, readonly) int migrationType;
@property (nonatomic) _Bool migrationNeedsCopyDueToConstraintMigration;

- (void)dealloc;
- (id)description;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (id)transformedManyToManys;
- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (void)_changeToCopyMigrationType;
- (id)sourceEntitiesByToOneWithNewEntityKey;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)populateForeignKeyUpdateDataWithMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (id)addedManyToManys;
- (id)removedManyToManys;
- (id)nextPropertyTransform;
- (id)newCloudKitMetadataUpdateStatements;

@end
