/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource : PXAssetsDataSource

{
    NSArray *_assetCollections;
    NSDictionary *_assetCollectionsById;
    NSDictionary *_assetsMap;
}

@property (nonatomic, readonly) NSArray *assetCollections;
@property (nonatomic, readonly) NSDictionary *assetCollectionsById;
@property (nonatomic, readonly) NSDictionary *assetsMap;

- (id)init;
- (id)description;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfItems;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)allItems;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithAssetCollections:(id)arg1 assetsMap:(id)arg2;
- (id)assetCollectionForSection:(unsigned long long)arg1;
- (id)assetCollectionForIdentifier:(id)arg1;
- (long long)sectionForAssetCollection:(id)arg1;
- (struct PXSimpleIndexPath)itemIndexPathForItem:(id)arg1;
- (unsigned long long)numberOfNotYetImportedItems;
- (unsigned long long)numberOfAlreadyImportedItems;
- (unsigned long long)numberOfSelectableItems;
- (_Bool)hasAlreadyImportedSection;
- (id)alreadyImportedCollection;
- (id)allSelectableItems;
- (id)allItemsUnsorted;
- (id)notYetImportedItems;
- (id)alreadyImportedItems;
- (id)itemForImportAssetUuid:(id)arg1;

@end
