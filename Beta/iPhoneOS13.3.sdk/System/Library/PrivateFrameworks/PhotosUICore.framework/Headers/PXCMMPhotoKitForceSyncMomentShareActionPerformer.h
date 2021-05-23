/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitForceSyncMomentShareActionPerformer : PXCMMActionPerformer

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (_Bool)canPerformActionWithSession:(id)arg1;

@end
