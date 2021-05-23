/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFAppendVariableAction : WFAction

- (id)variableName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)providedVariableNames;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (id)accessibilityName;

@end
