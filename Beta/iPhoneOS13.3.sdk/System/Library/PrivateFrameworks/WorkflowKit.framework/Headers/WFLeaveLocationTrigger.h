/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFLocationTrigger.h>

@interface WFLeaveLocationTrigger : WFLocationTrigger

+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;

- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
