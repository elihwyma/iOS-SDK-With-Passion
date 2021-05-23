/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performUserInteractionTask;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (void)_startSlideshow;

@end
