/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLGenericAlbum.h>

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum

{
    _Bool _needsPersistenceUpdate;
    _Bool _needsFixedOrderKeysComplianceUpdate;
}

@property (nonatomic) _Bool needsPersistenceUpdate;
@property (nonatomic) _Bool needsFixedOrderKeysComplianceUpdate;
@property (retain, nonatomic) NSOrderedSet *childCollections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly) _Bool isFolder;
@property (copy, nonatomic, readonly) CDUnknownBlockType albumsSortingComparator;
@property (nonatomic, readonly) int filter;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;
@property (retain, nonatomic, readonly) NSString *_prettyDescription;
@property (retain, nonatomic, readonly) NSString *_typeDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)validKindsForPersistence;
+ (id)childKeyForOrdering;
+ (id)localizedRecoveredTitle;

- (unsigned long long)count;
- (_Bool)isEmpty;
- (unsigned long long)approximateCount;
- (id)identifier;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (id)assets;
- (unsigned long long)photosCount;
- (id)payloadForChangedKeys:(id)arg1;
- (id)mutableAssets;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (unsigned long long)videosCount;
- (_Bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (_Bool)canPerformDeleteOperation;
- (id)childKeyForOrdering;
- (id)containers;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;
- (id)albums;
- (_Bool)hasAtLeastOneAlbum;
- (short)albumListType;
- (_Bool)canEditAlbums;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (void)setNeedsReordering;
- (_Bool)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)enforceFixedOrderKeyCompliance;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)addChildCollectionsObject:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (void)removeChildCollections:(id)arg1;
- (void)refreshCollections;
- (id)descriptionOfChildCollectionOrderValues;

@end
