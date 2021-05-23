/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/_PLManagedAlbum.h>

@class NSArray, NSDate, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary;

@interface PLManagedAlbum : _PLManagedAlbum

{
    _Bool _albumShouldBeAutomaticallyDeleted;
    _Bool _needsPersistenceUpdate;
}

@property (nonatomic) _Bool albumShouldBeAutomaticallyDeleted;
@property (nonatomic) _Bool needsPersistenceUpdate;
@property (retain, nonatomic) NSOrderedSet *assets;
@property (retain, nonatomic) NSSet *assetOrders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly) _Bool canShowComments;
@property (nonatomic, readonly) _Bool canShowAvalancheStacks;
@property (copy, nonatomic, readonly) NSArray *localizedLocationNames;
@property (retain, nonatomic, readonly) NSDate *startDate;
@property (retain, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic, readonly) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (retain, nonatomic, readonly) NSMutableOrderedSet *mutableAssets;
@property (nonatomic) _Bool hasUnseenContentBoolValue;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSObject *posterImage;
@property (nonatomic, readonly) _Bool isLibrary;
@property (nonatomic, readonly) _Bool isCameraAlbum;
@property (nonatomic, readonly) _Bool isPanoramasAlbum;
@property (nonatomic, readonly) _Bool isPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool isCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool isStandInAlbum;
@property (nonatomic, readonly) _Bool isFolder;
@property (nonatomic, readonly) _Bool isInTrash;
@property (nonatomic, readonly) _Bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isRecentlyAddedAlbum;
@property (nonatomic, readonly) _Bool isUserLibraryAlbum;
@property (nonatomic, readonly) _Bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) _Bool shouldDeleteWhenEmpty;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic, readonly) NSURL *groupURL;
@property (copy, nonatomic, readonly) CDUnknownBlockType sortingComparator;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic, readonly) NSMutableOrderedSet *userEditableAssets;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)validKindsForPersistence;
+ (id)childKeyForOrdering;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (void)clearAssetOrderByAbumUUIDs;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)refreshAssets;
- (_Bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (_Bool)canPerformDeleteOperation;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5;
- (_Bool)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (_Bool)supportsAssetOrderKeys;
- (id)childKeyForOrdering;
- (unsigned long long)countOfInternalUserEditableAssets;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (id)_expectedKeyAssets:(id)arg1;
- (void)updateKeyAssetsIfNeeded;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (id)_keysToBeObserved;
- (void)registerForChanges;
- (void)unregisterForChanges;
- (unsigned long long)_albumStandInCount;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)recalculateCachedCounts;
- (id)assetOrderByAbumUUIDs;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (id)_assetOrderByAssetUUID;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (id)descriptionOfAssetOrderValues;

@end
