/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFEvernoteAppendAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)performSearch:(id)arg1 inNotebook:(id)arg2 maxResults:(unsigned long long)arg3;
- (void)uploadNoteWithContent:(id)arg1 toNotebook:(id)arg2;
- (id)titleSearch;

@end
