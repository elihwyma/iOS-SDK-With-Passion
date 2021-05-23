/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUPhotoEditViewControllerSessionDelegate, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer

{
    id <PUReviewAssetProvider> _reviewAssetProvider;
    id <PUPhotoEditViewControllerSessionDelegate> _photoDelegate;
}

@property (retain, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider;
@property (weak, nonatomic) id <PUPhotoEditViewControllerSessionDelegate> photoDelegate;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performUserInteractionTask;
- (void)_presentEditViewControllerForReviewAsset:(id)arg1;

@end
