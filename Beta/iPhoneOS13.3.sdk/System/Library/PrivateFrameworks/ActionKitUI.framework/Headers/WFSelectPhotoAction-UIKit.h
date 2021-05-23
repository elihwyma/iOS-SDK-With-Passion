/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFSelectPhotoAction.h>

#import <ActionKitUI/Swift-Protocol.h>

@class NSString;

@interface WFSelectPhotoAction (UIKit) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)imagePicker:(id)arg1 didFinishPickingMedia:(id)arg2;
- (void)imagePickerDidCancel:(id)arg1;

@end
