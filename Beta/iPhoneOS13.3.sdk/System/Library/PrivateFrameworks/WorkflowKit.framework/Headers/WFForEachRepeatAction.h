/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRepeatAction.h>

@interface WFForEachRepeatAction : WFRepeatAction

{
    unsigned long long _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (_Bool)shouldRepeatWithVariableSource:(id)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (id)providedVariableNames;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)arg1;
- (void)setRepeatCollection:(id)arg1 withVariableSource:(id)arg2;
- (id)repeatCollectionWithVariableSource:(id)arg1;
- (id)itemVariableName;

@end
