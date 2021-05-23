/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFRunWorkflowAction.h>

@class NSString, WFRunWorkflowViewController;

@interface WFRunWorkflowAction (UIKit)

@property (weak, nonatomic) WFRunWorkflowViewController *runViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (_Bool)workflowViewController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)workflowViewController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
