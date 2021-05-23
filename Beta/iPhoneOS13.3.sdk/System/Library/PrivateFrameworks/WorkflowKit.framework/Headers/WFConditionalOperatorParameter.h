/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFConditionalOperatorParameter : WFEnumerationParameter

{
    _Bool _usingLegacyOperatorBehavior;
    NSArray *_possibleStates;
    NSArray *_possibleContentOperators;
    long long _contentType;
    unsigned long long _displayableTimeUnits;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) NSArray *possibleContentOperators;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) unsigned long long displayableTimeUnits;
@property (nonatomic, readonly) _Bool usingLegacyOperatorBehavior;

- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForPossibleState:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (void)possibleStatesDidChange;
- (Class)stateClass;
- (_Bool)supportsImportQuestions;
- (_Bool)allowsMultipleValues;
- (void)setPossibleContentOperators:(id)arg1 withContentType:(long long)arg2 displayableTimeUnits:(unsigned long long)arg3 usingLegacyOperatorBehavior:(_Bool)arg4;

@end
