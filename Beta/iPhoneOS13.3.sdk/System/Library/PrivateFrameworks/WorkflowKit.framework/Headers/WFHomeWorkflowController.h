/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFHomeWorkflow, WFOutOfProcessWorkflowController;

@interface WFHomeWorkflowController : NSObject

{
    WFOutOfProcessWorkflowController *_workflowController;
    WFHomeWorkflow *_workflow;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) WFOutOfProcessWorkflowController *workflowController;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) WFHomeWorkflow *workflow;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithWorkflow:(id)arg1;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(_Bool)arg3;

@end
