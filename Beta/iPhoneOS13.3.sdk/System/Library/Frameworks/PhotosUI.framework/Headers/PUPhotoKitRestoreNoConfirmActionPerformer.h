/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitDestructiveActionsPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitRestoreNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (long long)destructivePhotosAction;
- (_Bool)shouldConfirmDestructiveAction;

@end
