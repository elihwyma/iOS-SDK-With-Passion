/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitHideAssetActionPerformer : PXPhotoKitAssetActionPerformer

{
    _Bool _isHiding;
    PUAssetHidingHelper *_assetHidingHelper;
}

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) _Bool isHiding;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
