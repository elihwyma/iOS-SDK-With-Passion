/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class UILabel, UIStackView, WFRowOfIconsView;

@interface WFAutomationNotificationContentView : UIView

{
    UIStackView *_stackView;
    WFRowOfIconsView *_actionIconsView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) WFRowOfIconsView *actionIconsView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateUIFromNotification:(id)arg1;

@end
