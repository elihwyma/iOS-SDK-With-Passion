/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUActivitySharingController, UIViewController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer

{
    UIViewController *_preheatedSharingViewController;
    PUActivitySharingController *_activitySharingController;
}

@property (retain, nonatomic) UIViewController *preheatedSharingViewController;
@property (retain, nonatomic) PUActivitySharingController *activitySharingController;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performUserInteractionTask;
- (void)preheatUserInteractionTask;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (id)_createSharingViewControllerFromCurrentSelection;

@end
