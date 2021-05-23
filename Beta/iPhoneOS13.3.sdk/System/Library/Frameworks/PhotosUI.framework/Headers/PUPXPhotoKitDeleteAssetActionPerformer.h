/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPXPhotoKitDestructiveActionsPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitDeleteAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (_Bool)canPerformOnSubsetOfSelection;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (long long)destructivePhotosAction;

@end
