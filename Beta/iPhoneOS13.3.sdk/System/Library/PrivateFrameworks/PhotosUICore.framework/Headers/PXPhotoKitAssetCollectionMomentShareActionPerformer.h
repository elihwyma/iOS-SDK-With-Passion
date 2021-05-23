/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@class NSString, PXCMMWorkflowCoordinator;

@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer

{
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createAlertActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;

- (void)performUserInteractionTask;
- (void)completeUserInteractionTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;

@end
