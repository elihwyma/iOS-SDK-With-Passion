/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFCalendarAccessResource : WFAccessResource

+ (unsigned long long)entityType;
+ (_Bool)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
