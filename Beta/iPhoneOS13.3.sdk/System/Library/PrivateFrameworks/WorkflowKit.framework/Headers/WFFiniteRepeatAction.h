/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRepeatAction.h>

@interface WFFiniteRepeatAction : WFRepeatAction

{
    unsigned long long _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (_Bool)shouldRepeatWithVariableSource:(id)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (id)repeatInputVariableName;
- (id)repeatCountVariableName;
- (void)setRepeatInput:(id)arg1 withVariableSource:(id)arg2;
- (id)repeatInputWithVariableSource:(id)arg1;
- (void)setRepeatCount:(long long)arg1 withVariableSource:(id)arg2;
- (long long)repeatCountWithVariableSource:(id)arg1;
- (void)runWithInput:(id)arg1 error:(id *)arg2;

@end
