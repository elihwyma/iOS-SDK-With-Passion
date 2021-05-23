/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, WFAction, WFDragController, WFDragGestureRecognizer, WFModuleTitleView;

@protocol WFActionDrawerActionTableViewCellDelegate;

@interface WFActionDrawerActionTableViewCell : UITableViewCell

{
    WFAction *_action;
    WFDragGestureRecognizer *_dragRecognizer;
    id <WFActionDrawerActionTableViewCellDelegate> _delegate;
    WFModuleTitleView *_titleView;
    UIButton *_infoButton;
}

@property (weak, nonatomic, readonly) WFModuleTitleView *titleView;
@property (retain, nonatomic) UIButton *infoButton;
@property (nonatomic, readonly) WFAction *action;
@property (weak, nonatomic) WFDragGestureRecognizer *dragRecognizer;
@property (weak, nonatomic) id <WFActionDrawerActionTableViewCellDelegate> delegate;
@property (nonatomic, readonly) WFDragController *dragController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;

- (_Bool)isAccessibilityElement;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithAction:(id)arg1;
- (void)infoButtonPressed;

@end
