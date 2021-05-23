/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@protocol PXDisplayAssetCollection;

@interface PXAssetsDataSource : PXSectionedDataSource

@property (nonatomic, readonly) id <PXDisplayAssetCollection> firstAssetCollection;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> lastAssetCollection;
@property (nonatomic, readonly) _Bool areAllSectionsConsideredAccurate;

- (long long)totalNumberOfItems;
- (long long)aggregateMediaType;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
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
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)assetCollectionReferenceNearestToObjectReference:(id)arg1;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg2;
- (id)startingAssetReference;
- (void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;
- (id)photosGraphSuggestedContributions;
- (id)estimatedAssetsCountLocalizedString;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForItem;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionReferenceAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForAssetCollectionReference:(id)arg1;
- (id)assetCollectionReferenceForAssetCollectionReference:(id)arg1;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;

@end
