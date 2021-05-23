/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitRemoveAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;
+ (_Bool)canPerformOnSubsetOfSelection;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
