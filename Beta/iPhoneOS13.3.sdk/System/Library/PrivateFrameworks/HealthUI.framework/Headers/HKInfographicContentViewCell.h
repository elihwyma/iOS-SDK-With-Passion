/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface HKInfographicContentViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)_titleFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_descriptionFont;
- (id)_labelWithFont:(id)arg1;

@end
