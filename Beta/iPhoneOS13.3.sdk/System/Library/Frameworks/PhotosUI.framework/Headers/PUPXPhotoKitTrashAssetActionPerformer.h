/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPXPhotoKitDestructiveActionsPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)canPerformOnSubsetOfSelection;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (long long)destructivePhotosAction;

@end
