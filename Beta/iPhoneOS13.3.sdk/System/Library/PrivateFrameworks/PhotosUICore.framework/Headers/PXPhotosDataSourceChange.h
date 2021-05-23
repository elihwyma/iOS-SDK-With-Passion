/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, PHChange, PHFetchResultChangeDetails, PXSectionedDataSourceChangeDetails;

@interface PXPhotosDataSourceChange : NSObject

{
    long long _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    _Bool _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    NSArray *_favoriteChangedIndexPaths;
    _Bool _changesAreNoOp;
    PXSectionedDataSourceChangeDetails *_sectionedDataSourceChangeDetails;
    NSIndexSet *_sectionsWithKeyAssetChanges;
    PHChange *_originatingPhotoLibraryChange;
}

@property (readonly) _Bool hasIncrementalChanges;
@property (readonly) _Bool changesAreNoOp;
@property (copy, readonly) NSIndexSet *deletedSections;
@property (copy, readonly) NSIndexSet *insertedSections;
@property (copy, readonly) NSIndexSet *changedSections;
@property (copy, readonly) NSArray *deletedIndexPaths;
@property (copy, readonly) NSArray *insertedIndexPaths;
@property (copy, readonly) NSArray *changedIndexPaths;
@property (copy, readonly) NSArray *contentChangedIndexPaths;
@property (copy, readonly) NSArray *favoriteChangedIndexPaths;
@property (weak, readonly) PHChange *originatingPhotoLibraryChange;
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (nonatomic, readonly) NSIndexSet *sectionsWithKeyAssetChanges;

- (id)description;
- (void)prepareIfNeeded;
- (void)_prepareIncrementalDetails;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(unsigned long long)arg7 toIdentifier:(unsigned long long)arg8;
- (id)initWithFromIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (_Bool)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (_Bool)affectsSectionsInRange:(struct _NSRange)arg1;
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1;

@end
