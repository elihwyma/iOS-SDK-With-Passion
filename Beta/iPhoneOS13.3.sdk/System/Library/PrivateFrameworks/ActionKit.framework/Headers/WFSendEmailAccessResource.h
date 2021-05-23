/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFSendEmailAccessResource : WFAccessResource

+ (_Bool)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;

@end
