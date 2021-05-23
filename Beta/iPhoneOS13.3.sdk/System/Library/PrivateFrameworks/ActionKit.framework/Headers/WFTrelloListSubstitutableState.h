/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFTrelloListSubstitutableState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;

@end
