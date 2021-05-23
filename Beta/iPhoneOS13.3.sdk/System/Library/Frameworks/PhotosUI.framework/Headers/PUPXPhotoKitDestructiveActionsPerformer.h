/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitDestructiveActionsPerformer : PXPhotoKitAssetActionPerformer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isCancellable;
- (void)performUserInteractionTask;
- (long long)destructivePhotosAction;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;

@end
