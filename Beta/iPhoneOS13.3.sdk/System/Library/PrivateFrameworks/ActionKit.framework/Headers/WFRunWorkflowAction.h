/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString, WFWorkflowController;

@interface WFRunWorkflowAction : WFAction

{
    WFWorkflowController *_workflowController;
}

@property (weak, nonatomic) WFWorkflowController *workflowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)wasAddedToWorkflowByUser:(id)arg1;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (_Bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (id)getWorkflowWithError:(id *)arg1;
- (void)setHandoffWorkflowControllerState:(id)arg1;
- (void)getHandoffWorkflowControllerState:(CDUnknownBlockType)arg1;
- (void)runWorkflowWithInput:(id)arg1;

@end
