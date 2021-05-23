/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotosUICore/PXAssetsDataSource.h>

@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource

{
    PUAssetsDataSource *__reviewAssetsDataSource;
}

@property (nonatomic, readonly) PUAssetsDataSource *_reviewAssetsDataSource;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)initWithReviewAssetsDataSource:(id)arg1;

@end
