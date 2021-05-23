/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@interface WFConditionalSubjectParameter : WFParameter

- (id)defaultSupportedVariableTypes;
- (Class)stateClass;
- (_Bool)supportsImportQuestions;
- (_Bool)allowsMultipleValues;

@end
