/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetsDataSourceManagerConfiguration.h>

@class PHPhotoLibrary;

@interface _PXPhotoLibraryCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration

{
    PHPhotoLibrary *_photoLibrary;
}

- (id)initWithPhotoLibrary:(id)arg1;
- (id)configurationForZoomLevel:(long long)arg1;

@end
