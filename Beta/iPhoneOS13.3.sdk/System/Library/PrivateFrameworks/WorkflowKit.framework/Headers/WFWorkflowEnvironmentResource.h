/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@class NSString, WFWorkflow;

@interface WFWorkflowEnvironmentResource : WFResource

{
    WFWorkflow *_workflow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) WFWorkflow *workflow;

+ (_Bool)mustBeAvailableForDisplay;

- (void)refreshAvailability;
- (_Bool)workflowEnvironmentIsValid;

@end
