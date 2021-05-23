/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMShowPhotosPickerActionPerformer.h>

@class PXCMMPhotoKitSession, UIViewController;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer

{
    UIViewController *_photosPickerViewController;
}

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)performUserInteractionTask;
- (void)_pickerDidCompleteWithPickedAssets:(id)arg1;
- (id)_currentAssets;
- (id)_currentSelectedAssets;

@end
