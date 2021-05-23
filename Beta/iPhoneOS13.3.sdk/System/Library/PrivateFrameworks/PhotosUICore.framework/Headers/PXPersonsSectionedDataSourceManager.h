/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PHPhotoLibrary, PXPersonsSectionedDataSource;

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager

{
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PXPersonsSectionedDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reloadData;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)createInitialDataSource;
- (long long)_personTypeForSection:(long long)arg1;

@end
