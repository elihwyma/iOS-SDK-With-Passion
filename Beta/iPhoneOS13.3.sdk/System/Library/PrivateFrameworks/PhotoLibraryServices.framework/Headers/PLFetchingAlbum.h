/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/_PLFetchingAlbum.h>

@class NSArray, NSData, NSFetchRequest, NSOrderedSet, NSPredicate, NSString;

@interface PLFetchingAlbum : _PLFetchingAlbum

{
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
    _Bool _needsPersistenceUpdate;
    NSPredicate *_ALAssetsGroupFilterPredicate;
    unsigned long long _batchSize;
}

@property (retain, nonatomic) NSOrderedSet *fetchedAssets;
@property (nonatomic) _Bool needsPersistenceUpdate;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSData *customQueryParameters;
@property (retain, nonatomic) NSString *customQueryType;
@property (nonatomic, readonly) NSPredicate *extraFilterPredicate;
@property (retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) _Bool hasAssetsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)validKindsForPersistence;
+ (id)sortDescriptorsForAlbumKind:(int)arg1;
+ (id)predicateForAlbumKind:(int)arg1;
+ (_Bool)contextShouldIgnoreChangesForFetchedAssets;
+ (_Bool)contextShouldIgnoreChangesForFetchRequest;
+ (_Bool)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (id)_panoramasAlbumPredicate;

- (unsigned long long)count;
- (_Bool)isEmpty;
- (unsigned long long)approximateCount;
- (void)awakeFromFetch;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)mutableAssets;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)keyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(id)arg1;
- (_Bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)_cachedKeyAssets;
- (void)setupFetchRequest;
- (id)primitiveAssets;
- (id)_performFetchWithRequest:(id)arg1;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)updateSnapshotAndClearCaches:(id)arg1;
- (id)fastPointerAccessSetForAssets:(id)arg1;
- (_Bool)mayHaveAssetsInCommon:(id)arg1;

@end
