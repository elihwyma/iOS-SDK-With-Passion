/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MCItemSummaryCell : UITableViewCell

{
    UIImageView *_itemImageView;
    UIView *_itemTitleView;
    UILabel *_itemTitleLabel;
    UILabel *_itemSubtitleLabel;
}

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UIView *itemTitleView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemSubtitleLabel;

+ (double)titleOriginX;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupConstraints;
- (double)cellHeight;
- (void)_setupCell;
- (id)_profileImageAppropriateForDevice;

@end
