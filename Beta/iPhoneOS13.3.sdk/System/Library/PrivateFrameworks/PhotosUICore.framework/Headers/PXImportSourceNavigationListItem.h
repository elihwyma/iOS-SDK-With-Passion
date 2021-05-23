/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNavigationListItem.h>

@class PHImportSource, PHPhotoLibrary, UIImage;

@interface PXImportSourceNavigationListItem : PXNavigationListItem

{
    PHImportSource *_importSource;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) PHImportSource *importSource;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) UIImage *image;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isRemovable;
- (id)representedObject;
- (id)imageName;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;

@end
