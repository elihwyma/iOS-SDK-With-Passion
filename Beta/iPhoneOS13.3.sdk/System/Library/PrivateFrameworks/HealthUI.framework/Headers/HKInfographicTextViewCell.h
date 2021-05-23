/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface HKInfographicTextViewCell : UITableViewCell

{
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_descriptionFont;
- (id)_labelWithFont:(id)arg1;

@end
