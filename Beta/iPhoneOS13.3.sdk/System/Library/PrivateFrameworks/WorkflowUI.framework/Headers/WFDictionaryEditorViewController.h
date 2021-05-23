/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFListEditorViewController.h>

@class WFDictionaryEditorView;

@interface WFDictionaryEditorViewController : WFListEditorViewController

@property (nonatomic, readonly) WFDictionaryEditorView *editorView;

+ (Class)editorViewClass;

@end
