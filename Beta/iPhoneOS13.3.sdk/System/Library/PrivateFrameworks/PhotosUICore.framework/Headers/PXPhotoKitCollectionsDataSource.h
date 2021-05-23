/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCollectionsDataSource.h>

@class NSArray, NSDictionary, PHFetchResult, PXPhotoKitCollectionsDataSourceManagerConfiguration;

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource

{
    NSArray *__collectionListBySection;
    NSArray *__collectionsFetchResultBySection;
    NSDictionary *__keyAssetsFetchResultsByCollection;
    NSDictionary *__collectionsIndexPathsByCollection;
    NSDictionary *_itemFetchResultByCollection;
    NSArray *__virtualCollections;
    PHFetchResult *_collectionsFetchResult;
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_configuration;
}

@property (nonatomic, readonly) NSArray *_collectionListBySection;
@property (nonatomic, readonly) NSArray *_collectionsFetchResultBySection;
@property (nonatomic, readonly) NSDictionary *_keyAssetsFetchResultsByCollection;
@property (nonatomic, readonly) NSDictionary *_collectionsIndexPathsByCollection;
@property (nonatomic, readonly) NSDictionary *itemFetchResultByCollection;
@property (nonatomic, readonly) NSArray *_virtualCollections;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;

+ (long long)estimatedCountForAssetCollection:(id)arg1 withConfiguration:(id)arg2;

- (id)init;
- (id)content;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (long long)countForCollection:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)initWithCollectionListBySection:(id)arg1 collectionsFetchResultBySection:(id)arg2 keyAssetsFetchResultsByCollection:(id)arg3 collectionsIndexPathsByCollection:(id)arg4 itemFetchResultByCollection:(id)arg5 virtualCollections:(id)arg6 collectionsFetchResult:(id)arg7 dataSourceConfiguration:(id)arg8;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)assetCollectionsCountForSection:(long long)arg1;
- (long long)collectionsListCountForSection:(long long)arg1;
- (long long)assetCollectionsCountForFetchResult:(id)arg1;
- (long long)collectionsListCountForFetchResult:(id)arg1;
- (void)enumerateCollectionsUsingBlock:(CDUnknownBlockType)arg1;

@end
