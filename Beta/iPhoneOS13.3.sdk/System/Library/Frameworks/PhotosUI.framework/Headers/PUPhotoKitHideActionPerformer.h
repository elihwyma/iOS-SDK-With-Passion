/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer

{
    _Bool _isHiding;
    PUAssetHidingHelper *_assetHidingHelper;
}

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) _Bool isHiding;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
