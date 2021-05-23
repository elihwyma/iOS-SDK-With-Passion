/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionRevealInMomentActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createBarButtonItemForAssetCollection:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)systemImageNameForAssetCollection:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (id)_assetToRevealInAssetCollection:(id)arg1;

- (void)performUserInteractionTask;

@end
