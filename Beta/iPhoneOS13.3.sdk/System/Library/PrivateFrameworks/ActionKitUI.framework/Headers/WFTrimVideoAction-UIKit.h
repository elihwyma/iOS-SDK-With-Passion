/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFTrimVideoAction.h>

@class NSNumber, NSString;

@interface WFTrimVideoAction (UIKit)

@property (copy, nonatomic) NSNumber *hasSaved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)arg1;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)dismissEditor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
