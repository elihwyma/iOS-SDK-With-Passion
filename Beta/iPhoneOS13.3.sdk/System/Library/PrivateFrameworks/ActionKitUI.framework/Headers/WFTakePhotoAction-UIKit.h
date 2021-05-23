/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFTakePhotoAction.h>

@class NSString;

@interface WFTakePhotoAction (UIKit)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)cameraDeviceFromString:(id)arg1;

- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)presentCameraFromViewController:(id)arg1;

@end
