/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class UIColor, WFWorkflowIconDrawer;

@interface WFGlyphView : UIView

{
    WFWorkflowIconDrawer *_iconDrawer;
    struct UIEdgeInsets _glyphInsets;
}

@property (nonatomic, readonly) WFWorkflowIconDrawer *iconDrawer;
@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic) struct UIEdgeInsets glyphInsets;
@property (retain, nonatomic) UIColor *glyphColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
