/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitFavoriteActionPerformer : PUPhotoKitActionPerformer

{
    _Bool _favorite;
}

@property (nonatomic) _Bool favorite;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performBackgroundTask;

@end
