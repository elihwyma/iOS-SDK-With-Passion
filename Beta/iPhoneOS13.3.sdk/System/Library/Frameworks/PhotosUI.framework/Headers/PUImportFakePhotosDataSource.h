/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotosDataSource.h>

@class PXImportAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUImportFakePhotosDataSource : PXPhotosDataSource

{
    PXImportAssetsDataSource *_importDataSource;
}

@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(_Bool)arg2;
- (id)initWithImportDataSource:(id)arg1;

@end
