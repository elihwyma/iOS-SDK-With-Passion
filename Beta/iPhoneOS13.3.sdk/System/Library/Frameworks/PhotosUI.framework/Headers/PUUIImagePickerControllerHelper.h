/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUPhotosGridDownloadHelper, PUPhotosGridViewController, PUUIAlbumListViewController;

@protocol OS_dispatch_group, PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIImagePickerControllerHelper : NSObject

{
    PUPhotosGridDownloadHelper *_downloadHelper;
    _Bool _didHandleSelectionOfAssets;
    PUPhotosGridViewController *_gridViewController;
    PUUIAlbumListViewController *_albumListViewController;
    id <PUPhotoPicker> _photoPicker;
    NSObject<OS_dispatch_group> *_multiSelectionGroup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *multiSelectionGroup;
@property (nonatomic) _Bool didHandleSelectionOfAssets;
@property (weak, nonatomic, readonly) PUPhotosGridViewController *gridViewController;
@property (weak, nonatomic, readonly) PUUIAlbumListViewController *albumListViewController;
@property (weak, nonatomic, readonly) id <PUPhotoPicker> photoPicker;
@property (nonatomic, readonly) _Bool allowsMultipleSelection;
@property (nonatomic, readonly) _Bool requiresPickingConfirmation;
@property (nonatomic, readonly) _Bool showsFileSizePicker;
@property (nonatomic, readonly, getter=isAnyAssetDownloading) _Bool anyAssetDownloading;

+ (id)gridViewControllerSpec;
+ (id)albumListViewControllerSpec;
+ (unsigned long long)imagePickerTypesForMediaTypes:(id)arg1;
+ (int)albumFilterForMediaTypes:(id)arg1;
+ (id)collectionsFilterPredicateForMediaTypes:(id)arg1;
+ (id)assetsFilterPredicateForMediaTypes:(id)arg1;

- (void)cancelPhotoPicker;
- (id)_mediaTypes;
- (_Bool)showsPrompt;
- (unsigned long long)multipleSelectionLimit;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)initWithGridViewController:(id)arg1 photoPickerServices:(id)arg2;
- (id)initWithAlbumListViewController:(id)arg1 photoPickerServices:(id)arg2;
- (void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2 resizeTaskDescriptor:(id)arg3;
- (void)handleSelectionOfAssets:(id)arg1 resizeTaskDescriptor:(id)arg2;
- (void)_handleSelectionOfDownloadedAssets:(id)arg1 resizeTaskDescriptor:(id)arg2;
- (void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(_Bool)arg2 expectsLivePhoto:(_Bool)arg3;
- (void)_notifyImagePickerOfAssetAvailability:(id)arg1 resizeTaskDescriptor:(id)arg2;
- (id)_extraArgumentsForResizeTaskDescriptor:(id)arg1;
- (void)updateSessionInfo;
- (_Bool)clientSuppressesForchTouch;
- (id)_pickerProperties;
- (void)_showImageViewController:(id)arg1;
- (void)handleKeyboardAvoidanceIfNeeded:(id)arg1;

@end
