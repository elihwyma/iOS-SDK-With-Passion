/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFMultipleValueParameterState.h>

@interface WFContactSubstitutableState : WFMultipleValueParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)collectionByConvertingStringItemsToHandles:(id)arg1;
- (void)processContentCollection:(id)arg1 fromVariable:(_Bool)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (_Bool)reinterpretsStringsAsContactHandlesFromVariable:(_Bool)arg1;
- (id)stringInterpretedAsContactHandle:(id)arg1;
- (id)valueItemClasses;

@end
