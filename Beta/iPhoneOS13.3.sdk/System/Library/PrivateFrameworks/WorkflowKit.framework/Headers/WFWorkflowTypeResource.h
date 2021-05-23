/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@class NSString, WFWorkflow;

@interface WFWorkflowTypeResource : WFResource

{
    WFWorkflow *_workflow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) WFWorkflow *workflow;

+ (_Bool)mustBeAvailableForDisplay;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshAvailability;
- (_Bool)workflowTypesAreValid;

@end
