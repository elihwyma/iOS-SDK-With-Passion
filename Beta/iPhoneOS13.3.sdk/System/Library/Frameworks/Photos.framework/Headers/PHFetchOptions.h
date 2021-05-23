/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSArray, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, PHPhotoLibrary, PHQueryChangeDetectionCriteria;

@interface PHFetchOptions : NSObject <Swift>

{
    NSNumber *_includeHiddenAssetsNumber;
    NSNumber *_includeAllBurstAssetsNumber;
    NSNumber *_includeAssetSourceTypesNumber;
    NSNumber *_fetchLimitNumber;
    NSNumber *_fetchOffsetNumber;
    NSNumber *_curationTypeNumber;
    NSNumber *_wantsIncrementalChangeDetailsNumber;
    NSNumber *_chunkSizeForFetchNumber;
    NSNumber *_cacheSizeForFetchNumber;
    NSNumber *_reverseSortOrderNumber;
    NSNumber *_includeDuplicateAssetsNumber;
    NSNumber *_includePendingMemoriesNumber;
    NSNumber *_includeRejectedMemoriesNumber;
    NSNumber *_personContextNumber;
    NSNumber *_includeTrashedAssetsNumber;
    NSNumber *_includeTrashedMomentSharesNumber;
    NSNumber *_includeExpiredMomentSharesNumber;
    NSNumber *_includeFavoriteMemoriesCollectionListNumber;
    NSNumber *_includePlacesSmartAlbumNumber;
    NSNumber *_includeAllPhotosSmartAlbumNumber;
    NSNumber *_includeRecentlyEditedSmartAlbumNumber;
    NSNumber *_includeScreenRecordingsSmartAlbumNumber;
    NSNumber *_includeRootFolderNumber;
    NSNumber *_excludeMontageAssetsNumber;
    NSNumber *_minimumVerifiedFaceCountNumber;
    NSNumber *_minimumUnverifiedFaceCountNumber;
    NSNumber *_includeNonvisibleFacesNumber;
    NSNumber *_includeOnlyPersonsWithVisibleKeyFacesNumber;
    NSNumber *_includeOnlyFacesNeedingFaceCropNumber;
    NSNumber *_includeOnlyFacesWithFaceprintsNumber;
    NSNumber *_includeOnlyFacesInFaceGroupsNumber;
    NSNumber *_isExclusivePredicateNumber;
    NSMutableSet *_propertySets;
    NSNumber *_shouldPrefetchCountNumber;
    NSNumber *_highlightCurationTypeNumber;
    NSNumber *_sharingStreamNumber;
    NSNumber *_includeUserSmartAlbumsNumber;
    _Bool _includeRecentsSmartAlbum;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_customObjectIDSortOrder;
    PHQueryChangeDetectionCriteria *_changeDetectionCriteria;
    NSString *_transientIdentifier;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSPredicate *_internalInclusionPredicate;
    NSSet *_verifiedPersonTypes;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) NSSet *fetchPropertySetsAsSet;
@property (retain, nonatomic) NSArray *customObjectIDSortOrder;
@property (nonatomic, readonly) _Bool hasAnySortDescriptors;
@property (copy) PHQueryChangeDetectionCriteria *changeDetectionCriteria;
@property (retain, nonatomic) NSArray *fetchPropertySets;
@property (nonatomic) long long chunkSizeForFetch;
@property (nonatomic) long long cacheSizeForFetch;
@property (retain, nonatomic) NSString *transientIdentifier;
@property (retain, nonatomic) NSPredicate *internalPredicate;
@property (nonatomic) _Bool isExclusivePredicate;
@property (retain, nonatomic) NSArray *internalSortDescriptors;
@property (retain, nonatomic) NSPredicate *internalInclusionPredicate;
@property (nonatomic) _Bool reverseSortOrder;
@property (nonatomic) _Bool includeDuplicateAssets;
@property (nonatomic) _Bool includePendingMemories;
@property (nonatomic) _Bool includeRejectedMemories;
@property (nonatomic) _Bool includeFavoriteMemoriesCollectionList;
@property (nonatomic) _Bool includePlacesSmartAlbum;
@property (nonatomic) _Bool includeUserSmartAlbums;
@property (nonatomic) _Bool includeRecentlyEditedSmartAlbum;
@property (nonatomic) _Bool includeScreenRecordingsSmartAlbum;
@property (nonatomic) _Bool includeRootFolder;
@property (nonatomic) _Bool includeAllPhotosSmartAlbum;
@property (nonatomic) _Bool includeRecentsSmartAlbum;
@property (nonatomic) unsigned long long minimumVerifiedFaceCount;
@property (nonatomic) unsigned long long minimumUnverifiedFaceCount;
@property (nonatomic) long long curationType;
@property (nonatomic) _Bool includeNonvisibleFaces;
@property (nonatomic) _Bool includeOnlyFacesNeedingFaceCrop;
@property (nonatomic) _Bool includeOnlyFacesWithFaceprints;
@property (nonatomic) _Bool includeOnlyFacesInFaceGroups;
@property (nonatomic) long long personContext;
@property (nonatomic) _Bool includeOnlyPersonsWithVisibleKeyFaces;
@property (copy, nonatomic) NSSet *verifiedPersonTypes;
@property (nonatomic) _Bool excludeMontageAssets;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) _Bool shouldPrefetchCount;
@property (nonatomic) _Bool includeTrashedAssets;
@property (nonatomic) _Bool includeTrashedMomentShares;
@property (nonatomic) _Bool includeExpiredMomentShares;
@property (nonatomic) unsigned short highlightCurationType;
@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) unsigned long long fetchOffset;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) _Bool includeHiddenAssets;
@property (nonatomic) _Bool includeAllBurstAssets;
@property (nonatomic) unsigned long long includeAssetSourceTypes;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) _Bool wantsIncrementalChangeDetails;

+ (id)fetchOptionsWithInclusiveDefaults;
+ (id)fetchOptionsWithInclusiveDefaultsForPhotoLibrary:(id)arg1;
+ (id)fetchOptionsWithPhotoLibrary:(id)arg1 orObject:(id)arg2;
+ (id)effectivePhotoLibraryForFetchOptions:(id)arg1 object:(id)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeWithFetchOptions:(id)arg1;
- (void)addFetchPropertySets:(id)arg1;

@end
