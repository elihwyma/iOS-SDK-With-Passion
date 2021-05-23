/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFOpenInAction.h>

@class NSString, UIDocumentInteractionController, WFFileRepresentation;

@interface WFOpenInAction (UIKit)

@property (retain, nonatomic) UIDocumentInteractionController *document;
@property (weak, nonatomic) WFFileRepresentation *sendingFile;
@property (retain, nonatomic) WFFileRepresentation *retainedFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

@end
