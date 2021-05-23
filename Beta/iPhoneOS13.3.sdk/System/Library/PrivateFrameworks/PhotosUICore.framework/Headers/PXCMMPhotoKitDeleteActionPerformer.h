/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitDeleteActionPerformer : PXCMMActionPerformer

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
