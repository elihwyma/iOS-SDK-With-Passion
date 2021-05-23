/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSCache, NSMutableDictionary, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource

{
    NSMutableDictionary *_layoutItemByAssetCache;
    NSCache *_fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
}

@property (nonatomic, readonly) PXPhotosDataSourceChange *change;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;

+ (id)dataSourceWithAsset:(id)arg1;

- (id)description;
- (unsigned long long)identifier;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)inputForItem:(id)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsForAssetCollection:(id)arg1;
- (struct PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInAssetCollection:(id)arg1;
- (_Bool)hasCurationForAssetCollection:(id)arg1;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1;
- (id)_fastKeyCuratedAssetForAssetCollection:(id)arg1;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)assetCollectionReferenceNearestToObjectReference:(id)arg1;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)firstAssetCollection;
- (id)lastAssetCollection;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg2;
- (id)startingAssetReference;
- (_Bool)containsAnyItems;
- (_Bool)containsMultipleItems;
- (_Bool)couldObjectReferenceAppear:(id)arg1;
- (_Bool)areAllSectionsConsideredAccurate;
- (void)prefetchIndexPaths:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2;
- (void)prefetchSections:(id)arg1;
- (id)selectionSnapshotForAsset:(id)arg1 assetCollection:(id)arg2;
- (id)photosGraphSuggestedContributions;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;

@end
