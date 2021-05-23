/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFWorkflowIconDrawer;

@interface WFIconComposePreviewView : UIView

{
    WFWorkflowIconDrawer *_iconDrawer;
}

@property (retain, nonatomic) WFWorkflowIconDrawer *iconDrawer;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setIcon:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
