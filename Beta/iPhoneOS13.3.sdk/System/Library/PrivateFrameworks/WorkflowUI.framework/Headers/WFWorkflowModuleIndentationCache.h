/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSLock, WFWorkflow;

@interface WFWorkflowModuleIndentationCache : NSObject

{
    WFWorkflow *_workflow;
    NSLock *_lock;
    NSCountedSet *_indentationLevels;
}

@property (nonatomic, readonly) NSLock *lock;
@property (nonatomic, readonly) NSCountedSet *indentationLevels;
@property (weak, nonatomic, readonly) WFWorkflow *workflow;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithWorkflow:(id)arg1;
- (unsigned long long)indentationLevelForAction:(id)arg1;

@end
