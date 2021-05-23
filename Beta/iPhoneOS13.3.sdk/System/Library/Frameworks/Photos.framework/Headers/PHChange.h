/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectContext, NSMapTable, NSMutableDictionary, NSSet, PHPersistentChangeToken;

@protocol OS_dispatch_queue;

@interface PHChange : NSObject

{
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
    _Bool _unknownMergeEvent;
    NSMutableDictionary *_objectIDsByLocalIdentifier;
    NSManagedObjectContext *_context;
    NSDictionary *_deletedUuidsByObjectId;
    PHPersistentChangeToken *_changeToken;
}

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) NSDictionary *deletedUuidsByObjectId;
@property (nonatomic, readonly) _Bool hasIncrementalChanges;
@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;
@property (nonatomic, readonly) unsigned long long totalChangeCount;

+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 photoLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)mergePersistedChanges:(id)arg1;

- (id)init;
- (id)description;
- (id)deletedObjectIDs;
- (id)insertedObjectIDs;
- (id)updatedObjectIDs;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(_Bool)arg2;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(_Bool)arg2 changeToken:(id)arg3;
- (id)initWithInsertedObjectIDs:(id)arg1 updatedObjectIDs:(id)arg2 deletedObjectIDs:(id)arg3 deletedUuidsByObjectId:(id)arg4 changedAttributesByOID:(id)arg5 changedRelationshipsByOID:(id)arg6 unknownMergeEvent:(_Bool)arg7 changeToken:(id)arg8 managedObjectContext:(id)arg9;
- (id)changedAttributesByOID;
- (id)changedRelationshipsByOID;
- (void)_prepareCachedValuesForEntity:(id)arg1;
- (_Bool)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (_Bool)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (_Bool)keyFaceChangedForPersonOID:(id)arg1;
- (_Bool)contentOrThumbnailChangedForPHAssetOID:(id)arg1;
- (_Bool)contentOrThumbnailChangedForAsset:(id)arg1;
- (_Bool)trashedStateChangedForPHAssetOID:(id)arg1;
- (_Bool)hiddenStateChangedForPHAssetOID:(id)arg1;
- (_Bool)favoriteStateChangedForPHAssetOID:(id)arg1;
- (_Bool)packedBadgeAttributesChangedForPHAssetOID:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (id)changeDetailsForFetchResult:(id)arg1;
- (_Bool)intersectsWithDetectionCriteria:(id)arg1 managedObjectContext:(id)arg2;
- (_Bool)containsChangesForEntityClass:(Class)arg1;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2;
- (id)fetchUUIDMapForObjectIDs:(id)arg1 entityClass:(Class)arg2 context:(id)arg3;
- (id)_propertyNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)changedPropertyNamesForObject:(id)arg1;
- (id)changedPropertyNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)_relationshipNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)changedRelationshipNamesForObject:(id)arg1;
- (id)changedRelationshipNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)_formatedDeletedUUidsByObjectId;
- (id)_formatEncodedDictionary:(id)arg1 withDecodeBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasRelationshipChangesForLocalIdentifier:(id)arg1;
- (_Bool)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg1;
- (_Bool)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg1;
- (_Bool)momentRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1;
- (_Bool)highlightGroupRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1;

@end
