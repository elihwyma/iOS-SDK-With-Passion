/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKIDRegisteredReviewCell : UITableViewCell

{
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)_updateForCurrentSizeCategory;

@end
