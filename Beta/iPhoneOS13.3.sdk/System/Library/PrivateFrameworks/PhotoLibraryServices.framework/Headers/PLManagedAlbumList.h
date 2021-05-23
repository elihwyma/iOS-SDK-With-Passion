/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/_PLManagedAlbumList.h>

@class NSMutableOrderedSet, NSNumber, NSObject, NSString;

@protocol PLIndexMappingCache;

@interface PLManagedAlbumList : _PLManagedAlbumList

{
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    _Bool isRegisteredForChanges;
    _Bool didRegisteredWithUserInterfaceContext;
}

@property (copy, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSNumber *needsReorderingNumber;
@property (nonatomic) _Bool isRegisteredForChanges;
@property (nonatomic) _Bool didRegisteredWithUserInterfaceContext;
@property (nonatomic) short albumListType;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) NSMutableOrderedSet *albums;
@property (nonatomic, readonly) _Bool hasAtLeastOneAlbum;
@property (nonatomic, readonly) _Bool canEditAlbums;
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

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (void)persistAlbumListUUIDs:(id)arg1 type:(short)arg2 pathManager:(id)arg3 allowsOverwrite:(_Bool)arg4;
+ (_Bool)isValidTypeForPersistence:(short)arg1;
+ (void)pushChangesFromAlbumContainer:(id)arg1 toAlbumContainer:(id)arg2;
+ (unsigned long long)priorityForAlbumKind:(int)arg1;
+ (_Bool)albumKindHasFixedOrder:(int)arg1;
+ (id)_typeDescriptionForAlbumListType:(short)arg1;
+ (id)_singletonListWithType:(short)arg1 library:(id)arg2;
+ (id)albumListInPhotoLibrary:(id)arg1;
+ (id)importListInPhotoLibrary:(id)arg1;
+ (id)eventListInPhotoLibrary:(id)arg1;
+ (id)facesAlbumListInPhotoLibrary:(id)arg1;
+ (id)placesAlbumListInPhotoLibrary:(id)arg1;
+ (id)scenesAlbumListInPhotoLibrary:(id)arg1;
+ (id)allStreamedAlbumsListInPhotoLibrary:(id)arg1;
+ (id)_albumListWithType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumListInManagedObjectContext:(id)arg1;
+ (id)importListInManagedObjectContext:(id)arg1;
+ (id)eventListInManagedObjectContext:(id)arg1;
+ (id)facesAlbumListInManagedObjectContext:(id)arg1;
+ (id)placesAlbumListInManagedObjectContext:(id)arg1;
+ (id)scenesAlbumListInManagedObjectContext:(id)arg1;
+ (id)allStreamedAlbumsListInManagedObjectContext:(id)arg1;
+ (_Bool)_albumOrderMatchesFrom:(id)arg1 inDestination:(id)arg2;
+ (id)_validAlbumsFromSource:(id)arg1 destination:(id)arg2;
+ (_Bool)isValidPathForPersistence:(id)arg1;
+ (_Bool)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2;

- (void)dealloc;
- (_Bool)isEmpty;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (void)awakeFromInsert;
- (void)willSave;
- (void)didSave;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (void)registerForChanges;
- (void)unregisterForChanges;
- (void)enumerateDerivedIndexMappers:(CDUnknownBlockType)arg1;
- (_Bool)hasDerivedIndexMappers;
- (void)unregisterAllDerivedAlbums;
- (id)containers;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;
- (void)registerDerivedAlbumList:(struct NSObject *)arg1;
- (void)enumerateDerivedAlbumLists:(CDUnknownBlockType)arg1;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (void)setNeedsReordering;
- (_Bool)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (id)_albumsCountFetchRequest;
- (void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1;

@end
