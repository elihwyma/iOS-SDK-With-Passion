/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, PXImportAssetCollection, PXImportAssetsDataSource;

@protocol OS_dispatch_queue, PXImportAssetsDataSourceManagerDelegate;

@interface PXImportAssetsDataSourceManager : PXAssetsDataSourceManager

{
    _Bool _showAlreadyImportedItems;
    _Bool _showNotYetImportedItems;
    _Bool _alreadyImportedItemsSelectable;
    _Bool _needsFilterUpdate;
    id <PXImportAssetsDataSourceManagerDelegate> _delegate;
    PXImportAssetsDataSource *_unfilteredDataSource;
    NSSet *_visibleImportAssetIdentifiers;
    NSMutableDictionary *_allAssetCollectionsById;
    NSDictionary *_filteredAssetCollectionsById;
    NSMutableArray *_allAssetCollections;
    NSArray *_filteredAssetCollections;
    NSObject<OS_dispatch_queue> *_modelQueue;
    long long _maxAlreadyImportedItems;
    long long _forcedAlreadyImportedTruncationMode;
}

@property (retain, nonatomic) PXImportAssetsDataSource *unfilteredDataSource;
@property (retain, nonatomic) NSMutableDictionary *allAssetCollectionsById;
@property (copy, nonatomic) NSDictionary *filteredAssetCollectionsById;
@property (retain, nonatomic) NSMutableArray *allAssetCollections;
@property (copy, nonatomic) NSArray *filteredAssetCollections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modelQueue;
@property (nonatomic) _Bool needsFilterUpdate;
@property (nonatomic) long long maxAlreadyImportedItems;
@property (nonatomic) long long forcedAlreadyImportedTruncationMode;
@property (weak, nonatomic) id <PXImportAssetsDataSourceManagerDelegate> delegate;
@property (nonatomic, readonly) PXImportAssetsDataSource *dataSource;
@property (nonatomic, readonly) PXImportAssetCollection *unfilteredAlreadyImportedAssetCollection;
@property (copy, nonatomic) NSSet *visibleImportAssetIdentifiers;
@property (nonatomic) _Bool showAlreadyImportedItems;
@property (nonatomic) _Bool showNotYetImportedItems;
@property (nonatomic) _Bool alreadyImportedItemsSelectable;

+ (_Bool)assetCollectionsArray:(id)arg1 isEqualToAssetCollectionsArray:(id)arg2;
+ (void)copyFromAssetCollections:(id)arg1 toAssetCollections:(id *)arg2 assetCollectionsById:(id *)arg3;
+ (void)addModels:(id)arg1 toAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
+ (void)removeModels:(id)arg1 fromAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
+ (void)sortAssetCollectionsInArray:(id)arg1;

- (id)initWithDelegate:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (id)createInitialDataSource;
- (id)initWithAssetsFromDataSourceManager:(id)arg1 delegate:(id)arg2;
- (void)updateFilteredAssetsIfNeeded;
- (void)modifyAssetCollectionsWithBlock:(CDUnknownBlockType)arg1;
- (id)filteredModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
- (id)existingModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
- (void)rebuildAlreadyImportedAssetCollectionInCollections:(id)arg1 collectionsById:(id)arg2;
- (void)pruneEmptyAssetCollectionsInCollections:(id)arg1 collectionsById:(id)arg2;
- (void)setNeedsFilterUpdate;
- (void)updateAlreadyImportedSelectability;
- (long long)countOfUnfilteredAlreadyImportedAssetCollection;
- (long long)countOfAlreadyImportedAssetCollectionInCollectionsMap:(id)arg1;

@end
