/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionPerformer.h>

@class NSArray, PUPhotoKitDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPhotoKitActionPerformer : PUAssetActionPerformer

{
    PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
}

@property (copy, nonatomic, readonly) NSArray *assets;
@property (retain, nonatomic) PUPhotoKitDataSourceManager *photoKitDataSourceManager;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)instantlyExcludeAssetsFromDataSource;
- (void)stopExcludingAssetsFromDataSource;
- (void)forceIncludeAssetsInDataSource;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;

@end
