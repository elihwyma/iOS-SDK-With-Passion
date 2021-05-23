/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@interface WFVariablePickerParameter : WFEnumerationParameter

- (id)possibleStates;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (_Bool)alwaysShowsButton;
- (_Bool)supportsImportQuestions;

@end
