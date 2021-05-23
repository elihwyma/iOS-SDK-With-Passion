/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumListViewController.h>

@class NSArray, NSString, PUUIImagePickerControllerHelper, UIBarButtonItem;

@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIAlbumListViewController : PUAlbumListViewController

{
    UIBarButtonItem *_imagePickerCancelButton;
    _Bool _collectionsFetchResultIsValid;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    id <PUPhotoPicker> _photoPicker;
    NSArray *__imagePickerMediaTypes;
    unsigned long long __imagePickerAssetTypes;
}

@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes;
@property (nonatomic, setter=_setImagePickerAssetTypes:) unsigned long long _imagePickerAssetTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PUPhotoPicker> photoPicker;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (unsigned long long)filteringAssetTypes;
- (id)assetsFilterPredicate;
- (_Bool)shouldAllowEmailInAlbumSubtitle;
- (_Bool)shouldShowAllPhotosItem;
- (_Bool)shouldHideEmptyCollections;
- (_Bool)canShowAvatarViews;
- (id)newGridViewControllerForFolder:(id)arg1;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForAllPhotos;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)_invalidateCollectionsFetchResult;
- (void)_updateCollectionsFetchResultIfNeeded;
- (id)_imagePickerControllerHelper;
- (void)_handleImagePickerCancel:(id)arg1;

@end
