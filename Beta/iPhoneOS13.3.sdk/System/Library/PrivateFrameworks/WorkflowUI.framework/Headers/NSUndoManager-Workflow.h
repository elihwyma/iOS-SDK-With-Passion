/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSUndoManager.h>

@interface NSUndoManager (Workflow)

- (void)wf_performBlock:(CDUnknownBlockType)arg1;
- (void)addActionWithName:(id)arg1 undoHandler:(CDUnknownBlockType)arg2;

@end
