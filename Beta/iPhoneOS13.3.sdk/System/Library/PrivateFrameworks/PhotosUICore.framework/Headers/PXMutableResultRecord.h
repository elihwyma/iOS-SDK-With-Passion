/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXResultRecord.h>

@class NSPredicate, NSSet, PHFetchResult;

@interface PXMutableResultRecord : PXResultRecord

{
    PHFetchResult *_filteredFetchResult;
    NSPredicate *_inclusionPredicate;
    _Bool _filteredFetchResultIsValid;
    _Bool _inclusionPredicateIsValid;
    _Bool _reverseSortOrder;
    _Bool _wantsCuration;
    _Bool _preloadAssetTypeCounts;
    NSSet *_excludedOids;
    NSSet *_includedOids;
    NSSet *_curatedOids;
    PHFetchResult *_fetchResult;
    PHFetchResult *_curatedFetchResult;
    PHFetchResult *_keyAssetsFetchResult;
    long long _keyAssetIndex;
}

@property (nonatomic, readonly) NSSet *excludedOids;
@property (nonatomic, readonly) NSSet *includedOids;
@property (nonatomic, readonly) NSSet *curatedOids;
@property (nonatomic, readonly) NSPredicate *inclusionPredicate;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) _Bool reverseSortOrder;
@property (retain, nonatomic) PHFetchResult *curatedFetchResult;
@property (retain, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic) long long keyAssetIndex;
@property (nonatomic) _Bool wantsCuration;
@property (nonatomic, readonly) _Bool isCurated;
@property (nonatomic, readonly) PHFetchResult *filteredFetchResult;
@property (nonatomic, readonly) PHFetchResult *exposedFetchResult;
@property (nonatomic) _Bool preloadAssetTypeCounts;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setReverseSortOrder:(_Bool)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1 reverseSortOrder:(_Bool)arg2;
- (void)stopExcludingOids:(id)arg1;
- (void)excludeOids:(id)arg1;
- (void)stopIncludingAllOids;
- (void)includeOids:(id)arg1;
- (void)invalidateFetchResultAssetCache;
- (void)_setIncludeOids:(id)arg1;
- (void)_invalidateInclusionPredicate;
- (void)_invalidateKeyAssetIndex;
- (id)_exposedFetchResultBeforeFiltering;
- (void)_invalidateFilteredFetchResult;
- (void)_updateFilteredFetchResultIfNeeded;

@end
