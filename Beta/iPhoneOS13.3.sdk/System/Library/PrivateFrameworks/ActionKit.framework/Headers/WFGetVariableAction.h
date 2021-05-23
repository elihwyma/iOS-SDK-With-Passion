/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFGetVariableAction : WFAction

- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (id)accessibilityName;
- (id)currentVariable;

@end
