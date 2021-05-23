/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class INCodableAttribute;

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState

{
    INCodableAttribute *_codableAttribute;
}

@property (nonatomic, readonly) INCodableAttribute *codableAttribute;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)initWithValue:(id)arg1 codableAttribute:(id)arg2;

@end
