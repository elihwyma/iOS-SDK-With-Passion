/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUAlbumPickerViewController;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer

{
    PUAlbumPickerViewController *_albumPickerViewController;
}

@property (retain, nonatomic) PUAlbumPickerViewController *albumPickerViewController;

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performUserInteractionTask;
- (void)_handlePickedAlbum:(struct NSObject *)arg1 assets:(id)arg2;
- (void)_handleUserInteractionTaskResult:(_Bool)arg1 error:(id)arg2;

@end
