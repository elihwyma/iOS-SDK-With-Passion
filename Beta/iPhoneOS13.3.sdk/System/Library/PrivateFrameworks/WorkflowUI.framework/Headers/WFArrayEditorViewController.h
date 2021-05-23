/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFListEditorViewController.h>

@class WFArrayEditorView;

@interface WFArrayEditorViewController : WFListEditorViewController

@property (nonatomic, readonly) WFArrayEditorView *editorView;

+ (Class)editorViewClass;

@end
