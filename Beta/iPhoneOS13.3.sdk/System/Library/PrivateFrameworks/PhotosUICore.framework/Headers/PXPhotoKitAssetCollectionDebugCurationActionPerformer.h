/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionDebugCurationActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)systemImageNameForAssetCollection:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;

- (void)performUserInteractionTask;

@end
