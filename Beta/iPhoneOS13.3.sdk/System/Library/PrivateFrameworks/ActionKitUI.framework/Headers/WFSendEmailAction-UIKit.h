/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFSendEmailAction.h>

@class NSString;

@interface WFSendEmailAction (UIKit)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2;
- (void)sendTextViaMailtoURL:(id)arg1 withUserInterface:(id)arg2;
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateEmailHeaderFromParameters:(CDUnknownBlockType)arg1;

@end
