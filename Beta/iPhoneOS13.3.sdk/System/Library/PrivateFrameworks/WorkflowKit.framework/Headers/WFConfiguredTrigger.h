/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDatabaseObjectDescriptor.h>

@class NSString, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

{
    _Bool _shouldPrompt;
    _Bool _enabled;
    NSString *_workflowID;
    WFTrigger *_trigger;
}

@property (nonatomic, readonly) NSString *workflowID;
@property (nonatomic, readonly) WFTrigger *trigger;
@property (nonatomic, readonly) _Bool shouldPrompt;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;

- (id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(_Bool)arg4 enabled:(_Bool)arg5;

@end
