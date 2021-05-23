/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitCleanupActionPerformer : PXCMMActionPerformer

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (void)_activateSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
