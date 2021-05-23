/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDictionary, WFContentCollection, WFWorkflow;

@interface WFWorkflowControllerState : NSObject <Swift>

{
    WFWorkflow *_workflow;
    WFContentCollection *_currentInput;
    NSDictionary *_currentProcessedParameters;
    NSDictionary *_variables;
    unsigned long long _currentActionIndex;
}

@property (nonatomic, readonly) NSDictionary *variables;
@property (nonatomic, readonly) unsigned long long currentActionIndex;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) WFContentCollection *currentInput;
@property (nonatomic, readonly) NSDictionary *currentProcessedParameters;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 currentInput:(id)arg4 currentProcessedParameters:(id)arg5;

@end
