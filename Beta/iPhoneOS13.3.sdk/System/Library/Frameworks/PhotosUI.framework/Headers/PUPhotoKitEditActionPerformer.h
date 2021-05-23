/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performUserInteractionTask;
- (void)_beginEditingCurrentAsset;
- (void)_presentEditorForAsset:(id)arg1;

@end
