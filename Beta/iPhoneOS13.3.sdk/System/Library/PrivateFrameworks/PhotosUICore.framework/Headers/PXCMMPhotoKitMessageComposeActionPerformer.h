/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMShowMessageComposeActionPerformer.h>

@class MFMessageComposeViewController, NSString;

@interface PXCMMPhotoKitMessageComposeActionPerformer : PXCMMShowMessageComposeActionPerformer

{
    MFMessageComposeViewController *_messageComposeViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)performUserInteractionTask;

@end
