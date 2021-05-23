/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFChooseFromListAction.h>

@class NSString;

@interface WFChooseFromListAction (UIKit)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)chooseImageController:(id)arg1 didSelectItems:(id)arg2;
- (void)chooseImageControllerDidCancel:(id)arg1;

@end
