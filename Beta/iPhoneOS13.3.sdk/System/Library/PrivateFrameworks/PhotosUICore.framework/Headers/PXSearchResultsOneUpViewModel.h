/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXAssetReference, PXAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXPhotosDataSource;

@interface PXSearchResultsOneUpViewModel : NSObject

{
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXPhotosDataSource *_dataSource;
    PXAssetReference *_initialAssetReference;
}

@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotosDataSource *dataSource;
@property (retain, nonatomic) PXAssetReference *initialAssetReference;

- (id)initWithOneUpWithAsset:(id)arg1 atIndex:(unsigned long long)arg2 inAssetCollection:(id)arg3;
- (void)updateDataSourceWithFetchResult:(id)arg1;

@end
