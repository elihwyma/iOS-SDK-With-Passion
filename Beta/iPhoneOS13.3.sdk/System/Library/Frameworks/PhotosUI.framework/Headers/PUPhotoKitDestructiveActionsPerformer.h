/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoKitDestructiveActionsPerformer : PUPhotoKitActionPerformer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performUserInteractionTask;
- (long long)destructivePhotosAction;
- (void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (_Bool)shouldConfirmDestructiveAction;

@end
