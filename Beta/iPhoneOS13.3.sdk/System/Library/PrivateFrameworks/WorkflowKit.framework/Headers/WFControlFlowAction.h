/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFControlFlowAction : WFAction

{
    long long _mode;
}

@property (nonatomic, readonly) long long mode;

- (_Bool)isDeletable;
- (id)icon;
- (_Bool)hasChildren;
- (id)shortName;
- (id)iconName;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (id)outputContentClasses;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)serializedParameters;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (_Bool)displaysParameterSummary;
- (void)generateGroupingIdentifierIfNecessary;
- (id)createAccompanyingActionWithMode:(long long)arg1;
- (_Bool)inputPassthrough;
- (_Bool)snappingPassthrough;
- (_Bool)inputTypePassthrough;
- (id)outputIcon;
- (id)groupedOpenAction;
- (id)groupedCloseAction;
- (id)groupedIntermediaryActions;

@end
