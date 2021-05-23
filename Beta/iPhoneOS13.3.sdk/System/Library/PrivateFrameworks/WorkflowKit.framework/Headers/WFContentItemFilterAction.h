/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFContentItemAction.h>

@class NSString, WFContentQuery;

@interface WFContentItemFilterAction : WFContentItemAction

@property (nonatomic, readonly) WFContentQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)keywords;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (_Bool)inputRequired;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (_Bool)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2;
- (id)descriptionDictionary;
- (id)parameterSummary;
- (id)inputParameterKey;
- (id)parameterDefinitions;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (unsigned long long)parameterCollapsingBehavior;
- (id)tableTemplate;
- (id)localizedParameterSummaryStringForFind;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (void)runAsynchronouslyWithInput:(id)arg1 query:(id)arg2;

@end
