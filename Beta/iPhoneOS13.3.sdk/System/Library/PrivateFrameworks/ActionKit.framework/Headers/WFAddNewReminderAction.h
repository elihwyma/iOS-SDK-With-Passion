/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSDateFormatter;

@interface WFAddNewReminderAction : WFAction

{
    NSDateFormatter *_dateFormatter;
}

@property (nonatomic, readonly) NSDateFormatter *dateFormatter;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)updateLists;

@end
