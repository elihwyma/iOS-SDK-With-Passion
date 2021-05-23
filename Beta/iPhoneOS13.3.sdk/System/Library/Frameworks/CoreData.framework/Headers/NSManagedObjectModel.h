/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <Swift>

{
    id _dataForOptimization;
    id *_optimizationHints;
    id *_additionalPrivateIvars;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags {
        unsigned int _isInUse:1;
        unsigned int _isImmutable:1;
        unsigned int _isOptimizedForEncoding:1;
        unsigned int _hasEntityWithConstraints:1;
        unsigned int _skipUserInfoTombstones:1;
        unsigned int _reservedEntityDescription:27;
    } _managedObjectModelFlags;
}

@property (nonatomic, setter=_setModelsReferenceIDOffset:) long long _modelsReferenceIDOffset;
@property (copy, readonly) NSDictionary *entitiesByName;
@property (retain) NSArray *entities;
@property (readonly) NSArray *configurations;
@property (retain) NSDictionary *localizationDictionary;
@property (copy, readonly) NSDictionary *fetchRequestTemplatesByName;
@property (copy) NSSet *versionIdentifiers;
@property (copy, readonly) NSDictionary *entityVersionHashesByName;

+ (_Bool)supportsSecureCoding;
+ (id)mergedModelFromBundles:(id)arg1;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (id)modelByMergingModels:(id)arg1;
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)versionsHashesForModelAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)versionHashes:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
+ (id)_newModelFromOptimizedEncoding:(id)arg1 error:(id *)arg2;
+ (long long)_debugOptimizedModelLayout;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (_Bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
- (_Bool)isEditable;
- (id)entitiesForConfiguration:(id)arg1;
- (id)_entityForName:(id)arg1;
- (void)_setIsEditable:(_Bool)arg1;
- (id)versionHash;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (void)_removeEntity:(id)arg1;
- (void)_addEntity:(id)arg1;
- (void)_flattenProperties;
- (_Bool)_isOptimizedForEncoding;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (void)_finalizeIndexes;
- (id)_localizationPolicy;
- (_Bool)_hasEntityWithUniquenessConstraints;
- (id)fetchRequestTemplateForName:(id)arg1;
- (void)_setLocalizationPolicy:(id)arg1;
- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (void)_addVersionIdentifiers:(id)arg1;
- (id)_modelForVersionHashes:(id)arg1;
- (id)_initWithEntities:(id)arg1;
- (id)_initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1;
- (_Bool)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
- (void)_setIsEditable:(_Bool)arg1 optimizationStyle:(unsigned long long)arg2;
- (id)_optimizedEncoding:(id *)arg1;
- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;
- (id)initWithContentsOfOptimizedURL:(id)arg1;
- (id)_entityVersionHashesDigestFrom:(id)arg1;
- (_Bool)_hasPrecomputedKeyOrder;
- (void)_traverseTombstonesAndMark:(_Bool)arg1;
- (void)_markTombstones;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (void)_removeEntityNamed:(id)arg1;
- (id)immutableCopy;
- (id)_entityVersionHashesDigest;
- (id)_precomputedKeysForEntity:(id)arg1;
- (void)_skipUserInfoTombstones:(_Bool)arg1;
- (_Bool)_isSkippingUserInfoTombstones;
- (void)_unmarkTombstones;
- (id)_configurationsByName;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (id)_entitiesByVersionHash;
- (id)_versionIdentifiersAsArray;

@end
