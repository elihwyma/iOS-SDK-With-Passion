/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class NSSet, WFGranularAccessResourcePerWorkflowState;

@interface WFGranularAccessResource : WFAccessResource

{
    WFGranularAccessResourcePerWorkflowState *_stateForRequestedEntries;
}

@property (nonatomic, readonly) WFGranularAccessResourcePerWorkflowState *currentGranularPerWorkflowState;
@property (retain, nonatomic) WFGranularAccessResourcePerWorkflowState *stateForRequestedEntries;
@property (nonatomic, readonly) NSSet *requestedEntries;
@property (nonatomic, readonly) NSSet *valuesWithNotDeterminedAccess;
@property (nonatomic, readonly) NSSet *valuesWithDeniedAccess;

+ (Class)perWorkflowStateClass;

- (id)description;
- (void)updateStateForRequestedEntries;
- (void)setCurrentPerWorkflowState:(id)arg1;
- (unsigned long long)workflowLevelStatus;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(_Bool)arg1 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg2;

@end
