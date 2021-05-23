/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray, PHAsset;

@interface PXAssetVariationsDataSource : PXSectionedDataSource

{
    PHAsset *_asset;
    NSArray *_variations;
}

@property (copy, nonatomic, readonly) NSArray *variations;
@property (nonatomic, readonly) PHAsset *asset;

+ (id)emptyDataSource;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithVariations:(id)arg1 asset:(id)arg2;

@end
