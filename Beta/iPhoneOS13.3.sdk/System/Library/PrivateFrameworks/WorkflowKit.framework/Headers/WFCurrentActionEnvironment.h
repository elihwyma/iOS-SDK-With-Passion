/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFActionEnvironment.h>

@interface WFCurrentActionEnvironment : WFActionEnvironment

- (_Bool)isAppExtension;
- (_Bool)isMemoryConstrained;
- (_Bool)isWatchOS;

@end
