/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

+ (id)sharedSavingWorkerQueue;

- (_Bool)isCancellable;
- (void)performUserInteractionTask;
- (id)createActionProgress;
- (void)_completeSavingForAssets:(id)arg1 count:(long long)arg2;

@end
