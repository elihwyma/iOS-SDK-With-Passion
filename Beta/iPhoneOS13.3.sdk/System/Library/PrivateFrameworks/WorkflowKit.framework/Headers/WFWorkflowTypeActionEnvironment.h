/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment

{
    NSString *_workflowType;
}

@property (nonatomic, readonly) NSString *workflowType;

- (_Bool)isAppExtension;
- (id)initWithWorkflowType:(id)arg1;
- (_Bool)isMemoryConstrained;
- (_Bool)isWatchOS;

@end
