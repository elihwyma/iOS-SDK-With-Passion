/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFControlFlowAction.h>

@interface WFRepeatAction : WFControlFlowAction

{
    long long _currentIndex;
}

@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic, readonly) unsigned long long numberOfLoops;

- (id)name;
- (_Bool)shouldRepeatWithVariableSource:(id)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (id)createAccompanyingActions;
- (id)providedVariableNames;
- (_Bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (_Bool)displaysParameterSummary;
- (_Bool)outputsMultipleItems;
- (id)defaultOutputName;
- (id)indexVariableName;
- (id)indexVariableNameWithScopeLevel:(unsigned long long)arg1;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)arg1;

@end
