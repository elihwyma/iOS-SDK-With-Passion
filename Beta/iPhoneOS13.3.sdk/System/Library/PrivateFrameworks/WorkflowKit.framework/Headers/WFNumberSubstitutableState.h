/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class NSNumber;

@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState

@property (nonatomic, readonly) NSNumber *number;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)serializedRepresentationFromNumber:(id)arg1;

- (id)initWithNumber:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;

@end
