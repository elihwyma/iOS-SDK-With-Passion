/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBrowserSelectionSnapshot.h>

@class NSArray, NSMutableArray;

@protocol PXDisplayAssetDataSource;

@interface _PXBrowserDataSourceSelection : PXBrowserSelectionSnapshot

{
    NSMutableArray *_assets;
    NSArray *_indexPaths;
    id <PXDisplayAssetDataSource> _dataSource;
}

@property (nonatomic, readonly) NSArray *indexPaths;
@property (nonatomic, readonly) id <PXDisplayAssetDataSource> dataSource;
@property (nonatomic, readonly) NSArray *assets;

- (long long)mediaType;
- (long long)assetCount;
- (long long)estimatedAssetCount;
- (id)modelObjects;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2;
- (id)displayAssetAtIndex:(long long)arg1;
- (id)assetReferenceAtIndex:(long long)arg1;
- (long long)indexOfAssetReference:(id)arg1;
- (long long)estimatedModelObjectsCount;

@end
