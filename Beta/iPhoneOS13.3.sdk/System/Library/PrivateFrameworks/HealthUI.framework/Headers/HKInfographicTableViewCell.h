/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface HKInfographicTableViewCell : UITableViewCell

{
    _Bool hideSeparator;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIView *_separator;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIView *separator;

- (id)_titleFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSeparatorHidden:(_Bool)arg1;
- (id)_valueFont;
- (id)_labelWithFont:(id)arg1;

@end
