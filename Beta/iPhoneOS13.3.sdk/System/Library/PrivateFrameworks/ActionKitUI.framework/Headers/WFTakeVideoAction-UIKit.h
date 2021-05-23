/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFTakeVideoAction.h>

@class NSString;

@interface WFTakeVideoAction (UIKit)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)qualityFromString:(id)arg1;
+ (long long)cameraDeviceFromString:(id)arg1;

- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

@end
