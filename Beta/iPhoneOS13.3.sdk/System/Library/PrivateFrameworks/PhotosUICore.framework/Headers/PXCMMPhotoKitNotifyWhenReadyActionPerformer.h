/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (_Bool)_needsToNotifyForMomentShare:(id)arg1 localAssetCount:(long long)arg2;

@end
