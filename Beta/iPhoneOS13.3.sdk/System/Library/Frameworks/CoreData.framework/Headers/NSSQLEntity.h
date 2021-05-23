/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSStoreMapping.h>

@class NSArray, NSDictionary, NSEntityDescription, NSKnownKeysMappingStrategy, NSMutableArray, NSMutableDictionary, NSSQLEntityKey, NSSQLEntity_DerivedAttributesExtension, NSSQLModel, NSSQLOptLockKey, NSSQLPrimaryKey, NSSQLStoreMappingGenerator, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLEntity : NSStoreMapping

{
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    NSMutableArray *_virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    struct _NSRange _toOneRange;
    NSMutableArray *_uniqueProperties;
    NSMutableArray *_multicolumnUniquenessConstraints;
    void *_fetch_entity_plan;
    NSMutableDictionary *_rtreeIndices;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    NSMutableArray *_derivedAttributes;
    NSSQLEntity_DerivedAttributesExtension *_derivedAttributeExtension;
    struct __sqlentityFlags {
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _hasAttributesWithFileBackedFutures:1;
        unsigned int _reserved:30;
    } _sqlentityFlags;
}

@property (nonatomic, readonly) NSDictionary *rtreeIndexes;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)finalize;
- (id)attributes;
- (id)model;
- (id)properties;
- (id)propertiesByName;
- (id)propertyMapping;
- (id)entityDescription;
- (id)tempTableName;
- (id)relationshipNamed:(id)arg1;
- (id)subentities;
- (id)manyToManyRelationships;
- (unsigned int)entityID;
- (id)propertyNamed:(id)arg1;
- (id)tableName;
- (_Bool)hasInheritance;
- (unsigned int)subentityMaxID;
- (id)superentity;
- (id)foreignKeyColumns;
- (id)foreignEntityKeyColumns;
- (id)foreignOrderKeyColumns;
- (id)attributeColumns;
- (id)primaryKey;
- (id)subentityKey;
- (id)optLockKey;
- (id)uniqueProperties;
- (id)externalName;
- (id)_propertySearchMapping;
- (void)_addSubentity:(id)arg1;
- (void)setSubentities:(id)arg1;
- (id)toManyRelationships;
- (void *)_odiousHashHack;
- (id)attributeNamed:(id)arg1;
- (id)rtreeIndexForIndexNamed:(id)arg1;
- (id)mappingGenerator;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (_Bool)hasAttributesWithFileBackedFutures;
- (_Bool)hasAttributesWithExternalDataReferences;
- (_Bool)isRootEntity;
- (id)rootEntity;
- (id)derivedAttributesExtension;
- (void)_generateIndexes;
- (void)_doPostModelGenerationCleanup;
- (id)entitySpecificPropertiesPassing:(CDUnknownBlockType)arg1;
- (id)subhierarchyColumnMatching:(id)arg1;
- (id)columnsToFetch;
- (_Bool)hasSubentities;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addColumnToFetch:(id)arg1;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (void)addDerivedAttribute:(id)arg1;
- (void)_generateProperties;
- (void)setSuperentity:(id)arg1;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (id)multicolumnUniquenessConstraints;
- (_Bool)_collectFKSlots:(id)arg1 error:(id *)arg2;
- (void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2;
- (_Bool)_isValidFunctionForDerivations:(id)arg1;
- (id)binaryIndexForIndexDescription:(id)arg1;
- (id)rtreeIndexForIndexDescription:(id)arg1;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (id)entitySpecificProperties;
- (id)entitySpecificRelationships;
- (id)entitySpecificAttributes;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (id)columnsToCreate;
- (id)virtualForeignKeyColumns;
- (void)setEntityID:(unsigned int)arg1;
- (_Bool)isKindOfSQLEntity:(id)arg1;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (void)_generateInverseRelationshipsAndMore;
- (void)_organizeConstraints;
- (void)_generateMulticolumnUniquenessConstraints;
- (void)addUniquedProperty:(id)arg1;
- (_Bool)_entityIsBroken:(id *)arg1;
- (id)derivedAttributes;
- (_Bool)_generateAttributeDerivations:(id *)arg1;
- (struct _NSRange)_toOneRange;
- (_Bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (id)indexForIndexDescription:(id)arg1;

@end
