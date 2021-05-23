/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFRunSSHScriptAction : WFAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)session:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)authenticateAndRunAsynchronouslyWithInput:(id)arg1 session:(id)arg2;
- (void)finishRunningSSHScriptWithError:(id)arg1;

@end
