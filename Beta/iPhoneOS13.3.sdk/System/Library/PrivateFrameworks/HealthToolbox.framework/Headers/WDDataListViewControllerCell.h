/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDDataListViewControllerCell : UITableViewCell

{
    NSLayoutConstraint *_largeTextIconImageCenterYAnchorConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    UIImageView *_iconImageView;
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)_updateFont;

@end
