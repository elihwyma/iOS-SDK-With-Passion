/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSourceManager.h>

@class NSString, PXPhotosDataSource;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager

{
    PXPhotosDataSource *_photosDataSource;
}

@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)initWithPhotosDataSource:(id)arg1;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;
- (id)initWithAssetsDataSourceManager:(id)arg1;

@end
