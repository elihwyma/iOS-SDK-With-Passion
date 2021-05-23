/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSectionManager.h>

@class PHPhotoLibrary;

@protocol PXNavigationRoot;

@interface PXNavigationRootDataSourceManager : PXDataSectionManager

{
    id <PXNavigationRoot> _navigationRoot;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) id <PXNavigationRoot> navigationRoot;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (id)initWithNavigationRoot:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)createDataSection;

@end
