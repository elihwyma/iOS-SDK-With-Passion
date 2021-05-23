/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class WFContentProperty, WFVariable, WFVariableParameterState;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState

{
    WFContentProperty *_effectiveContentProperty;
    WFVariableParameterState *_variableState;
}

@property (nonatomic, readonly) WFVariableParameterState *variableState;
@property (nonatomic, readonly) WFContentProperty *effectiveContentProperty;
@property (nonatomic, readonly) WFVariable *variable;

+ (id)subjectType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithVariable:(id)arg1;
- (long long)contentType;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isEnumeration;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (id)containedVariables;
- (unsigned long long)displayableTimeUnits;
- (_Bool)isCaseInsensitive;
- (unsigned long long)comparableTimeUnits;
- (id)supportedComparisonOperators;
- (_Bool)isIrrational;
- (unsigned long long)tense;
- (id)unitType;
- (id)initWithVariableState:(id)arg1;
- (Class)contentClassProvidingContentProperty;

@end
