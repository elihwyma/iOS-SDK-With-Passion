/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSString, PUActivitySharingController;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer

{
    PUActivitySharingController *_activitySharingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performUserInteractionTask;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3 withAsset:(id)arg4;
- (void)activitySharingControllerDidCancel:(id)arg1;
- (void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;
- (void)_activitySharingControllerDidCancel:(id)arg1;
- (void)_activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;
- (void)_presentShareSheet;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;

@end
