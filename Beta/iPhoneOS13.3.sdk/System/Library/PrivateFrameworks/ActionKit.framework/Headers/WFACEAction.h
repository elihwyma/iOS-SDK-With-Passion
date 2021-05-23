/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFACEAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithResult:(id)arg1 error:(id)arg2;
- (void)constructAceCommandWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)runCommandWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
