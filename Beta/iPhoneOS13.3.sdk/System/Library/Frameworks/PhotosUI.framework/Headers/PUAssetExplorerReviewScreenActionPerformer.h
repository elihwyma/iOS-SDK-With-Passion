/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionPerformer.h>

@class PUActivityProgressController;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenActionPerformer : PUAssetActionPerformer

{
    CDUnknownBlockType _performUserInteractionTaskBlock;
    PUActivityProgressController *__requestProgressController;
}

@property (retain, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController;
@property (copy, nonatomic) CDUnknownBlockType performUserInteractionTaskBlock;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performUserInteractionTask;
- (void)executePerformUserInteractionTaskBlock;
- (void)requestReviewAssetForDisplayAsset:(id)arg1 reviewAssetProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleReviewAssetRequestCompletedWithSuccess:(_Bool)arg1 canceled:(_Bool)arg2 error:(id)arg3 reviewAsset:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_setupProgressControllerForProgress:(id)arg1;
- (void)_handleProgressControllerCanceled:(id)arg1;
- (void)_showFailedReviewAssetRequestAlert;

@end
