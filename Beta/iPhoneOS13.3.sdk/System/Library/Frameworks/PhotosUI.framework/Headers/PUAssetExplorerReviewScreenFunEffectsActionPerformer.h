/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@class PUReviewScreenBarsModel;

@protocol PUFunEffectsViewControllerObserver, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenFunEffectsActionPerformer : PUAssetExplorerReviewScreenActionPerformer

{
    id <PUReviewAssetProvider> _reviewAssetProvider;
    id <PUFunEffectsViewControllerObserver> _funEffectsObserver;
    PUReviewScreenBarsModel *_reviewBarsModel;
}

@property (retain, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider;
@property (weak, nonatomic) id <PUFunEffectsViewControllerObserver> funEffectsObserver;
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performUserInteractionTask;
- (void)_presentFunEffectsViewControllerForAsset:(id)arg1;

@end
