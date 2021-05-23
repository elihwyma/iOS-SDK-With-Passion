/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell

{
    UILabel *_headerLabel;
}

@property (retain, nonatomic) UILabel *headerLabel;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)_updateTextColor;

@end
