/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface WFColoredDotButton : UIButton

{
    UIColor *_dotColor;
    UIView *_dotView;
}

@property (weak, nonatomic) UIView *dotView;
@property (copy, nonatomic) UIColor *dotColor;

- (void)layoutSubviews;
- (struct UIEdgeInsets)contentEdgeInsets;

@end
