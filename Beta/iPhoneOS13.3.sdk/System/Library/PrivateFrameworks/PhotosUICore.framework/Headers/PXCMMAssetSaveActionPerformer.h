/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMAssetActionPerformer.h>

@interface PXCMMAssetSaveActionPerformer : PXCMMAssetActionPerformer

- (_Bool)isCancellable;
- (void)performBackgroundTask;
- (id)createActionProgress;
- (void)_simulateImportForAssetReference:(id)arg1 assetImportStatusManager:(id)arg2;
- (void)_importAsset:(id)arg1;

@end
