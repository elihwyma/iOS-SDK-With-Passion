/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WFActionDrawerResultsHeaderView : UITableViewHeaderFooterView

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *detailLabel;

- (id)initWithReuseIdentifier:(id)arg1;

@end
