/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHPhotoLibrary, PXAssetsDataSourceManager;

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject

{
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    long long _zoomLevel;
    PHPhotoLibrary *_photoLibrary;
}

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long zoomLevel;
@property (nonatomic, readonly) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithZoomLevel:(long long)arg1;
- (id)dataSourceManagerCreateInitialPhotosDataSource:(id)arg1;
- (id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2;

@end
