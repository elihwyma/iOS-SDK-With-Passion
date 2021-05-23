/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UILabel;

@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell

{
    id <LUILogFilterCurrentPredicateTableViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_deleteButton;
}

@property (weak, nonatomic) id <LUILogFilterCurrentPredicateTableViewCellDelegate> delegate;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIButton *deleteButton;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupUI;
- (id)_createTitleLabel;
- (id)_createDeleteButton;
- (void)_deleteButtonTapped:(id)arg1;

@end
