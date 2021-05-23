/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)canPerformOnSubsetOfSelection;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)_containedPerformerClasses;

- (void)performUserInteractionTask;
- (void)_handleActionPick:(id)arg1 forPerformerClass:(Class)arg2;

@end
