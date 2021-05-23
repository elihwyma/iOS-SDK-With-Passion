/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFNotificationAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)getNotificationAttachmentsWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runWithUserNotificationCenterInput:(id)arg1;
- (id)actionAlert;

@end
