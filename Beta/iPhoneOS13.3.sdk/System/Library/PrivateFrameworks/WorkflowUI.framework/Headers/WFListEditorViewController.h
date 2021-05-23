/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, WFListEditorView;

@interface WFListEditorViewController : UIViewController

{
    WFListEditorView *_editorView;
}

@property (nonatomic, readonly) WFListEditorView *editorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIViewController *componentHostingViewController;

+ (Class)editorViewClass;

- (void)done;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
