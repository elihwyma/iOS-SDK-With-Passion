/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFControlFlowAction.h>

@class NSString;

@protocol WFVariableProvider;

@interface WFConditionalAction : WFControlFlowAction

{
    id <WFVariableProvider> _parentVariableProvider;
}

@property (weak, nonatomic) id <WFVariableProvider> parentVariableProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serializedParametersForHome:(id)arg1;

- (id)name;
- (_Bool)isDeletable;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (_Bool)inputRequired;
- (_Bool)skipsProcessingHiddenParameters;
- (id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (id)actionsProvidingVariableName:(id)arg1;
- (id)copyForProcessing;
- (_Bool)populatesInputFromInputParameter;
- (id)createAccompanyingActions;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (id)inputContentClasses;
- (_Bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (id)inputSourceInWorkflow:(id)arg1;
- (id)minimumSupportedClientVersion;
- (id)defaultOutputName;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (_Bool)inputPassthrough;
- (void)variableDidChange:(id)arg1;
- (id)fileSizeForQuantityValue:(id)arg1;
- (id)timeIntervalForQuantityValue:(id)arg1;
- (id)measurementForQuantityValue:(id)arg1;
- (id)predicateForComparisonOperator:(long long)arg1 rightDate:(id)arg2 secondRightDate:(id)arg3 comparableTimeUnits:(unsigned long long)arg4 rightDurationValue:(id)arg5;
- (void)setTruth:(_Bool)arg1 withVariableSource:(id)arg2;
- (_Bool)truthWithVariableSource:(id)arg1;
- (_Bool)groupContainsOtherwiseAction;
- (Class)settingsViewControllerClass;
- (void)reloadOpenActionInWorkflow:(id)arg1;
- (id)subjectState;
- (long long)subjectContentType;
- (void)updatePossibleOperators;
- (void)updateRightExpressionParameters;
- (_Bool)useLegacyComparisonBehavior;
- (void)clearLegacyComparisonBehaviorFlag;

@end
