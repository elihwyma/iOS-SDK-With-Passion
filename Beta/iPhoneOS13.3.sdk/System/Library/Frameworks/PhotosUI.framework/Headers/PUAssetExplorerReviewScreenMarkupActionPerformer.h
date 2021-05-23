/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUPhotoMarkupViewControllerObserver, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer

{
    id <PUReviewAssetProvider> _reviewAssetProvider;
    id <PUPhotoMarkupViewControllerObserver> _markupObserver;
}

@property (retain, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider;
@property (weak, nonatomic) id <PUPhotoMarkupViewControllerObserver> markupObserver;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performUserInteractionTask;
- (void)_presentMarkupViewControllerForReviewAsset:(id)arg1;

@end
