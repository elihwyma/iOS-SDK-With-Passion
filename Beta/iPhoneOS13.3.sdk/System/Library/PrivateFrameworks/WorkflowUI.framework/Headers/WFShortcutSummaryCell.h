/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStackView, WFRowOfIconsView;

@interface WFShortcutSummaryCell : UITableViewCell

{
    WFRowOfIconsView *_actionIconsView;
    UILabel *_summaryLabel;
    UIStackView *_mainStackView;
}

@property (retain, nonatomic) WFRowOfIconsView *actionIconsView;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (retain, nonatomic) UIStackView *mainStackView;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithTitle:(id)arg1 actionIcons:(id)arg2;
- (void)removeActionViewIfNeeded;
- (void)addActionViewIfNeeded;

@end
