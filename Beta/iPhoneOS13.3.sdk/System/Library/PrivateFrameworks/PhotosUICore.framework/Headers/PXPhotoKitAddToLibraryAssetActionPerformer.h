/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@interface PXPhotoKitAddToLibraryAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performBackgroundTask;

@end
