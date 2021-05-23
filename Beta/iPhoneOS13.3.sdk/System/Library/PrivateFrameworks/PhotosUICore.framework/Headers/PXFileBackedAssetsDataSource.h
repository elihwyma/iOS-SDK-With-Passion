/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSDictionary, _PXFileBackedAssetCollection;

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource

{
    _PXFileBackedAssetCollection *_assetCollection;
    NSDictionary *_assetCollectionBySection;
    NSDictionary *_assetDescriptionsBySection;
}

@property (copy, nonatomic, readonly) NSDictionary *assetDescriptionsBySection;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)inputForItem:(id)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)photosGraphSuggestedContributions;
- (id)initWithFileURLsBySection:(id)arg1;
- (id)initWithFileBackedAssetDescriptionsBySection:(id)arg1;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;

@end
