/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)stateByTogglingValue:(id)arg1;
- (id)stateByReplacingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (id)stateByAppendingValue:(id)arg1;
- (id)stateByRemovingValueAtIndex:(unsigned long long)arg1;

@end
