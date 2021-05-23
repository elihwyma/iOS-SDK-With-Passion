/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class NSDictionary, WFWorkflow;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

{
    WFWorkflow *_workflow;
    NSDictionary *_workflowJavaScriptCoreRepresentation;
}

@property (nonatomic, readonly) WFWorkflow *workflow;
@property (copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithWorkflow:(id)arg1;
- (id)policyFunctionName;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)workflowJavaScriptCoreRepresentationWithError:(id *)arg1;
- (id)javaScriptCoreRepresentationWithError:(id *)arg1;

@end
